/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmbatha <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/29 12:21:32 by mmbatha           #+#    #+#             */
/*   Updated: 2018/06/29 12:52:37 by mmbatha          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/get_next_line.h"

char			*ft_strchr(const char *str, int firstc)
{
	while (*str)
	{
		if (*str == (char)firstc)
			return ((char *)str);
		str++;
	}
	if (*str == (char)firstc)
		return ((char *)str);
	return (NULL);
}
