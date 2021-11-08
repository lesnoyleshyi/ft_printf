/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_int.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stycho <stycho@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/09 00:37:49 by stycho            #+#    #+#             */
/*   Updated: 2021/11/09 00:37:51 by stycho           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printint(int nbr)
{
	int		i;
	char	char_repr;

	i = 1;
	if (nbr == -2147483648)
		return ((int)(write(1, "-2147483648", 11)));
	if (nbr / 10 != 0)
	{
		i += ft_printint(nbr / 10);
		char_repr = (nbr * (1 - 2 * (nbr < 0))) % 10 + '0';
		write(1, &char_repr, 1);

	}
	else
	{
		if (nbr < 0)
			i += write(1, "-", 1);
		char_repr = (nbr * (1 - 2 * (nbr < 0))) % 10 + '0';
		write(1, &char_repr, 1);
	}
	return (i);
}
