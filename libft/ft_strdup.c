/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmbatha <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/29 12:27:01 by mmbatha           #+#    #+#             */
/*   Updated: 2018/06/29 12:54:25 by mmbatha          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "includes/get_next_line.h"

char			*ft_strdup(const char *str1)
{
	int		i;
	size_t	length;
	char	*str2;

	i = 0;
	length = ft_strlen(str1);
	str2 = (char *)malloc(sizeof(char) * (length + 1));
	if (str1 == NULL)
		return (NULL);
	while (str1[i])
	{
		str2[i] = str1[i];
		i++;
	}
	str2[i] = '\0';
	return (str2);
}
