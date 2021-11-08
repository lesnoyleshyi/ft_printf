/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base_i.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stycho <stycho@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/08 16:06:25 by stycho            #+#    #+#             */
/*   Updated: 2021/11/08 16:06:27 by stycho           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putnbr_base_i(unsigned long long nbr, const char *base)
{
	size_t	base_len;
	int		i;

	if (!base)
		return (0);
	i = 1;
	base_len = ft_strlen(base);
	if (nbr / base_len != 0)
	{
		i += ft_putnbr_base_i(nbr / base_len, base);
		write(1, &base[nbr % base_len], 1);
	}
	else
		write(1, &base[nbr], 1);
	return (i);
}
