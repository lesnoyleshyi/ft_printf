# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: stycho <stycho@student.21-school.ru>       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/11/06 20:25:54 by stycho            #+#    #+#              #
#    Updated: 2021/11/09 15:33:38 by stycho           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	=	libftprintf.a

SRCS	=	ft_putnbr_base_i.c	ft_printf.c	ft_putchar_i.c	ft_putstr_i.c\
			ft_choose_func.c	ft_strlen.c	ft_printint.c	ft_putptr.c

OBJS	=	$(SRCS:.c=.o)

CFLAGS	=	-Wall -Wextra -Werror

%.o		:	%.c ft_printf.h
			gcc ${CFLAGS} -c $< -o $@

${NAME}	:	${OBJS}
			ar rcs ${NAME} $?

all		:	${NAME}

clean	:
			rm -rf ${OBJS}

fclean	:	clean
			rm -rf ${NAME}

test_m	:	${NAME}
			gcc ${CFLAGS} -g test_m.c ft_printf.c ft_choose_func.c ft_printint.c\
 									  ft_putchar_i.c ft_putnbr_base_i.c ft_putstr_i.c\
 									  ft_strlen.c ft_putptr.c

test_printint	:	${NAME}
					gcc ${CFLAGS} -g test_ft_print_int.c ft_printint.c -o test_ft_print_int

re		: 	fclean all

bonus	:
			@ echo "I haven't made bonus part"

.PHONY	:	all clean fclean re bonus test_m
