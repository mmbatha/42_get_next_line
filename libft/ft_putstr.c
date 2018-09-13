/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmbatha <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/29 11:52:56 by mmbatha           #+#    #+#             */
/*   Updated: 2018/06/29 12:49:58 by mmbatha          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "includes/get_next_line.h"

void			ft_putstr(const char *str)
{
	if (str)
	{
		write(1, str, ft_strlen(str));
	}
}
