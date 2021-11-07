/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stycho <stycho@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/07 13:39:01 by stycho            #+#    #+#             */
/*   Updated: 2021/11/07 13:39:04 by stycho           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_base(unsigned long long nbr, const char *base)
{
	size_t		base_len;
	static char	flag;

	if (!base)
		return ;
	base_len = ft_strlen(base);
	if (base_len == 16 && !flag)
	{
		write(1, "0x", 2);
		flag = 1;
	}
	if (nbr / base_len != 0)
	{
		ft_putnbr_base(nbr / base_len, base);
		write(1, &base[nbr % base_len], 1);
	}
	else
		write(1, &base[nbr], 1);
}
