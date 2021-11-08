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
# include <stdarg.h>
# include <stddef.h>
# include <unistd.h>
int		ft_printf(const char *format, ...);
int		ft_putnbr_base_i(unsigned long long nbr, const char *base);
int		ft_choose_func(char specifier, va_list sec_args);
int		ft_putchar_i(char c);
int		ft_putstr_i(char *s);
size_t	ft_strlen(const char *s);
int		ft_printint(int nbr);
#endif
