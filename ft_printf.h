/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmoutawa <mmoutawa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/03 23:42:08 by mmoutawa          #+#    #+#             */
/*   Updated: 2021/12/03 23:58:29 by mmoutawa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <unistd.h>

int	ft_puchar(int c);
int	ft_putstr(char *str);
int	ft_putnbr(int n);
int	ft_printf(const char *str, ...);
int	ft_lwhx(unsigned int c);
int	ft_uphx(unsigned int c);
int	ft_unint(unsigned int n);
int	ft_adrs(unsigned long p);

#endif
