/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khebert <khebert@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/24 10:34:16 by twaky             #+#    #+#             */
/*   Updated: 2025/11/29 22:42:16 by khebert          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "get_next_line.h"
#include <stdio.h>

char	*ft_strchr(const char *s, int c)
{
	char	c_cast;

	c_cast = c;
	while (*s)
	{
		if (c_cast == *s)
			return ((char *) s);
		s++;
	}
	if (*s == c_cast)
		return ((char *) s);
	return (NULL);
}

char	*stash_upt(char *stash, int i)
{
	char	*new_stash;
	int		b;

	b = 0;
	if (stash[i] == '\n' && stash[i + 1] != '\0')
	{
		new_stash = malloc((ft_strlen(stash) - i) + 1);
		if (!new_stash)
			return (NULL);
		i++;
		while (stash[i] != '\0')
			new_stash[b++] = stash[i++];
		new_stash[b] = '\0';
		free(stash);
		return (new_stash);
	}
	free(stash);
	return (NULL);
}

char	*ft_stash(char **stash, char *return_line)
{
	int	i;
	int	j;

	if (!(*stash) || (*stash)[0] == '\0')
	{
		free((*stash));
		(*stash) = NULL;
		return (NULL);
	}
	i = 0;
	while ((*stash)[i] != '\n' && (*stash)[i] != '\0')
		i++;
	return_line = malloc(i + 2);
	if (!return_line)
		return (NULL);
	j = 0;
	while (j <= i && (*stash)[j] != '\0')
	{
		return_line[j] = (*stash)[j];
		j++;
	}
	return_line[j] = '\0';
	(*stash) = stash_upt((*stash), i);
	return (return_line);
}

char	*if_stash_no_null(char **stash, char **buffer)
{
	char	*old;

	old = (*stash);
	if ((*stash) != NULL)
	{
		(*stash) = ft_strcatmalloc((*stash), (*buffer));
		free (old);
	}
	return ((*stash));
}

char	*get_next_line(int fd)
{
	char			*buffer;
	char			*return_line;
	static char		*stash;
	int				read_bytes;

	return_line = NULL;
	if (fd < 0 || BUFFER_SIZE <= 0)
		return (NULL);
	buffer = malloc(BUFFER_SIZE + 1);
	if (!buffer)
		return (NULL);
	while (!stash || !ft_strchr(stash, '\n'))
	{
		read_bytes = read(fd, buffer, BUFFER_SIZE);
		if (read_bytes <= 0)
			break ;
		buffer[read_bytes] = '\0'; 
		if (stash != NULL)
			stash = if_stash_no_null(&stash, &buffer);
		else
			stash = ft_strdup(buffer);
	}
	free (buffer);
	return_line = ft_stash(&stash, return_line);
	return (return_line);
}
