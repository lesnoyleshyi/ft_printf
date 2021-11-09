/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_choose_func.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stycho <stycho@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/08 14:54:48 by stycho            #+#    #+#             */
/*   Updated: 2021/11/08 14:54:49 by stycho           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_choose_func(char specifier, va_list sec_args)
{
	if (specifier == '\0')
		return (0);
	if (specifier == '%')
		return ((int)write(1, &specifier, 1));
	if (specifier == 'c')
		return (ft_putchar_i(va_arg(sec_args, int)));
	if (specifier == 's')
		return (ft_putstr_i(va_arg(sec_args, char *)));
	if (specifier == 'p')
		return (ft_putptr(va_arg(sec_args, unsigned long long )));
	if (specifier == 'd' || specifier == 'i')
		return (ft_printint(va_arg(sec_args, long int)));
	if (specifier == 'u')
		return (ft_putnbr_base_i(va_arg(sec_args, unsigned int),
				"0123456789"));
	if (specifier == 'x')
		return (ft_putnbr_base_i(va_arg(sec_args, unsigned int),
				"0123456789abcdef"));
	if (specifier == 'X')
		return (ft_putnbr_base_i(va_arg(sec_args, unsigned int),
				"0123456789ABCDEF"));
	else
		return ((int)write(1, &specifier, 1));
}
