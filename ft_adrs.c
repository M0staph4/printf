/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_adrs.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmoutawa <mmoutawa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/03 22:54:33 by mmoutawa          #+#    #+#             */
/*   Updated: 2021/12/03 23:01:26 by mmoutawa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_lwhxx(unsigned long c)
{
	int		x;
	char	*p;

	x = 0;
	p = "0123456789abcdef";
	if (c < 16)
		x += ft_puchar(p[c]);
	else if (c >= 16)
	{
		x += ft_lwhxx(c / 16);
		x += ft_lwhxx(c % 16);
	}
	return (x);
}

int	ft_adrs(unsigned long p)
{
	int	x;

	x = 2;
	ft_putstr ("0x");
	x += ft_lwhxx (p);
	return (x);
}
