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

#include <stdarg.h>
#include <unistd.h>
#include "ft_printf.h"

int	ft_printf(const char *format, ...)
{
	va_list	ap;
	int		i;

	va_start(ap, format);
	while (str[i] != '\0')
	{
		if (str[i] == '%')
		{
			if (str[i + 1] == '%')
			{
				write(1, str[++i], 1);
				i++;
			}
			else if (str[i + 1] == 'c')
			{
				ft_putchar_fd(va_arg(ap, int), 1);
				i += 2;
			}
			else if (str[i + 1] == 's')
			{
				ft_putstr_fd(va_arg(ap, char *), 1);
				i += 2;
			}
			else if (str[i + 1] == 'p')
			{
				ft_putnbrbase(va_arg(ap, void *));
				i += 2;
			}
			else if (str[i + 1] == 'd' || str[i + 1] == 'i')
			{
				ft_itoa(va_arg(strings, int));
				i += 2;
			}
			else if (str[i + 1] == 'u')
			{
				ft_print_unsint(va_arg(strings, unsigned long), 1);
				i += 2;
			}
			else if (str[i + 1] == 'x' || str[i + 1] == 'X')
			{
				ft_print_hex(va_arg(strings, unsigned long), 1);
				i += 2;
			}
			else
			{
				i += ft_skip_spaces(void);
			}
		}
		write(1, str[i++], 1);
	}
	va_end(ap);
	return (0);
}