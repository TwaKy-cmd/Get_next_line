/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khebert <khebert@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/24 10:33:36 by twaky             #+#    #+#             */
/*   Updated: 2025/11/28 17:58:11 by khebert          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# include <stdlib.h>
# include <unistd.h>

char	*get_next_line(int fd);
char	*ft_strcpy(char *dest, char *src);
int		ft_strlen(char *str);
char	*ft_strdup(char *src);
char	*ft_strcatmalloc(char *s1, char *s2);
char	*ft_strchr(const char *s, int c);
char	*ft_stash(char **stash, char *return_line);

#endif
