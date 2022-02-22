/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmoutawa <mmoutawa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/03 23:25:08 by mmoutawa          #+#    #+#             */
/*   Updated: 2021/12/04 00:06:44 by mmoutawa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_lol(char s, va_list p)
{
	int	x;

	x = 0;
	if (s == 'c')
		x += ft_puchar(va_arg (p, int));
	else if (s == 's')
		x += ft_putstr(va_arg (p, char *));
	else if (s == 'd' || s == 'i')
		x += ft_putnbr(va_arg (p, int));
	else if (s == 'p')
		x += ft_adrs(va_arg (p, unsigned long));
	else if (s == 'x')
		x += ft_lwhx(va_arg (p, int));
	else if (s == 'X')
		x += ft_uphx(va_arg (p, int));
	else if (s == 'u')
		x += ft_unint(va_arg (p, int));
	else if (s == '%')
		x += ft_puchar('%');
	else
		x += ft_puchar(s);
	return (x);
}

int	ft_printf(const char *str, ...)
{
	int		c;
	int		x;
	va_list	p;

	x = 0;
	c = 0;
	va_start (p, str);
	while (str[c])
	{
		if (str[c] == '%')
		{
			c++;
			x += ft_lol(str[c], p);
			c++;
		}
		else
		{
			ft_puchar(str[c++]);
			x++;
		}
	}
	va_end (p);
	return (x);
}
