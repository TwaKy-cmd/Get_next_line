/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khebert <khebert@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/24 10:34:28 by twaky             #+#    #+#             */
/*   Updated: 2025/11/29 22:35:07 by khebert          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "get_next_line.h"
#include <stdio.h>

int	ft_strlen(char *str)
{
	int	len;

	len = 0;
	while (str[len] != '\0')
		len++;
	return (len);
}

char	*ft_strdup(char *src)
{
	int		i;
	char	*dup;

	i = 0;
	dup = 0;
	if (src == 0)
		return (0);
	dup = malloc((ft_strlen(src) + 1));
	if (dup == 0)
		return (0);
	while (src[i])
	{
		dup[i] = src[i];
		i++;
	}
	dup[i] = '\0';
	return (dup);
}

char	*ft_strcatmalloc(char *s1, char *s2)
{
	char	*res;
	int		a;
	int		b;
	int		len;

	a = 0;
	b = 0;
	len = ft_strlen(s1);
	len += ft_strlen(s2);
	res = malloc(len + 1);
	while (s1[a] != '\0')
		res[b++] = s1[a++];
	a = 0;
	while (s2[a] != '\0')
		res[b++] = s2[a++];
	res[b] = '\0';
	return (res);
}
