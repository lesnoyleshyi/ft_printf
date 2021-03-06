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

int	ft_printf(const char *format, ...)
{
	va_list	ap;
	int		i;
	int		len;

	if (!format)
		return (0);
	i = 0;
	len = 0;
	va_start(ap, format);
	while (format[i] != '\0')
	{
		if (format[i] == '%')
		{
			len += ft_choose_func(format[i + 1], ap);
			i += 1 + (format[i + 1] != '\0');
		}
		else
			len += (int)write(1, &format[i++], 1);
	}
	va_end(ap);
	return (len);
}
