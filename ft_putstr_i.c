/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_i.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stycho <stycho@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/09 15:32:16 by stycho            #+#    #+#             */
/*   Updated: 2021/11/09 15:32:17 by stycho           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putstr_i(char *s)
{
	int	i;

	i = 0;
	if (s)
	{
		while (s[i])
			write(1, &s[i++], sizeof(char));
	}
	else
		return ((int)write(1, "(null)", 6));
	return (i);
}
