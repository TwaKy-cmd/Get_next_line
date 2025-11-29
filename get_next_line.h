/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khebert <khebert@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/24 10:33:36 by twaky             #+#    #+#             */
/*   Updated: 2025/11/29 22:55:50 by khebert          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# include <stdlib.h>
# include <unistd.h>

char	*ft_strchr(const char *s, int c);
char	*stash_upt(char *stash, int i);
char	*ft_stash(char **stash, char *return_line);
char	*if_stash_no_null(char **stash, char **buffer);
char	*get_next_line(int fd);
int		ft_strlen(char *str);
char	*ft_strdup(char *src);
char	*ft_strcatmalloc(char *s1, char *s2);

#endif
