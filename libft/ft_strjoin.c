/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmbatha <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/29 12:32:02 by mmbatha           #+#    #+#             */
/*   Updated: 2018/06/29 12:36:47 by mmbatha          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "includes/get_next_line.h"

char			*ft_strjoin(char const *str1, char const *str2)
{
	int		i;
	char	*new_str;

	if (str1 == NULL || str2 == NULL)
		return (NULL);
	new_str = (char *)malloc(sizeof(char) * (ft_strlen(str1) + ft_strlen(str2) \
				+ 1));
	if (new_str == NULL)
		return (NULL);
	i = -1;
	while (*str1)
		new_str[++i] = *str1++;
	while (*str2)
		new_str[++i] = *str2++;
	new_str[++i] = '\0';
	return (new_str);
}
