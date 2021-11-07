/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stycho <stycho@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/06 20:26:10 by stycho            #+#    #+#             */
/*   Updated: 2021/11/06 20:26:15 by stycho           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

#include <stdio.h>

int	ft_printf(const char *format, ...)
{
	va_list	ap;
	int		i;

	va_start(ap, format);
	i = 0;
	while (format[i] != '\0')
	{
		if (format[i] == '%')
		{
			if (format[i + 1] == '%')
			{
				write(1, &format[++i], 1);
				i++;
			}
			else if (format[i + 1] == 'c')
			{
				ft_putchar_fd(va_arg(ap, int), 1);
				i += 2;
			}
			else if (format[i + 1] == 's')
			{
				ft_putstr_fd(va_arg(ap, char *), 1);
				i += 2;
			}
			else if (format[i + 1] == 'p')
			{
				ft_putnbr_base((unsigned long long)va_arg(ap, void *), "0123456789abcdef");
				i += 2;
			}
			else if (format[i + 1] == 'd' || format[i + 1] == 'i')
			{
				ft_putstr_fd(ft_itoa(va_arg(ap, long int)), 1);
				i += 2;
			}
			else if (format[i + 1] == 'u')
			{
				ft_putnbr_base(va_arg(ap, unsigned long long), "0123456789");
				i += 2;
			}
			else if (format[i + 1] == 'x' || format[i + 1] == 'X')
			{
				if (format[i + 1] == 'x')
					ft_putnbr_base(va_arg(ap, unsigned long), "0123456789abcdef");
				else
					ft_putnbr_base(va_arg(ap, unsigned long), "0123456789ABCDEF");
				i += 2;
			}
			else
			{
//				i += ft_skip_spaces(void);
				write(1, "skip ", 5);
			}
		}
		write(1, &format[i++], 1);
	}
	va_end(ap);
	return (i);
}
