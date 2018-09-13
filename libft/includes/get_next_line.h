/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmbatha <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/29 11:44:34 by mmbatha           #+#    #+#             */
/*   Updated: 2018/06/29 11:51:10 by mmbatha          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H
# define BUFF_SIZE 4096
# include <stdio.h>

void			ft_putchar(char c);
void			ft_putendl(char const *s);
void			ft_putstr(const char *s);
char			*ft_strchr(const char *s, int c);
char			*ft_strdup(const char *s);
char			*ft_strjoin(char const *s1, char const *s2);
size_t			ft_strlen(const char *s);
int				get_next_line(const int fd, char **line);

#endif
