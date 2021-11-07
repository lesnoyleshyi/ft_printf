/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stycho <stycho@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/07 12:21:02 by stycho            #+#    #+#             */
/*   Updated: 2021/11/07 12:22:30 by stycho           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# include "./libft/libft.h"

# include <stdarg.h>
int	ft_printf(const char *format, ...);
void	ft_putnbr_base(unsigned long long nbr, const char *base);

#endif
