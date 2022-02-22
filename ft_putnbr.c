/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmoutawa <mmoutawa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/03 23:13:34 by mmoutawa          #+#    #+#             */
/*   Updated: 2021/12/04 00:02:34 by mmoutawa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putnbr(int n)
{
	int	x;

	x = 0;
	if (n == -2147483648)
		x += ft_putstr ("-2147483648");
	else
	{
		if (n < 0)
		{
			x += ft_puchar('-');
			n = n * -1;
			x += ft_putnbr (n);
		}
		else if (n >= 0 && n <= 9)
			x += ft_puchar (n + '0');
		else
		{
			x += ft_putnbr(n / 10);
			x += ft_putnbr(n % 10);
		}
	}
	return (x);
}
