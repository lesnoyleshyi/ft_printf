# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: stycho <stycho@student.21-school.ru>       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/11/06 20:25:54 by stycho            #+#    #+#              #
#    Updated: 2021/11/06 20:25:56 by stycho           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	=	libftprintf.a

SRCS	=	ft_printf.c	ft_putnbr_base_i.c	ft_putchar_i.c	ft_putstr_i.c

OBJS	=	${SRCS:.c=.o}

CFLAGS	=	-Wall -Wextra -Werror

%.o		:	%.c libft/libft.h
			gcc -Wall -Werror -Wextra -g $< -c

${NAME}	:	${OBJS}
			ar rc ${NAME} $?

all		:	${NAME}

mklibft	:
			cd libft && make

build	:	all mklibft
			gcc ${CFLAGS} test_m.c libft/libft.a ${NAME} -o test_m

debug	: all mklibft
			gcc ${CFLAGS} -g test_m.c libft/libft.a ${NAME} -o test_m

debug_putnbr	: all mklibft
				gcc ${CFLAGS} -g test_ft_putnbr_base.c libft/libft.a ${NAME} -o test_putnbr

clean	:
			rm -rf ${OBJS}

fclean	:	clean
			rm -rf ${NAME}

re		: fclean all

bonus	:
		@ echo "I haven't made bonus part"

.PHONY	: all clean fclean re bonus