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

NAME		=	libftprintf.a

LIBFT_PATH	=	./libft

SRCS		=	ft_putnbr_base_i.c	ft_printf.c	ft_putchar_i.c	ft_putstr_i.c\
				ft_choose_func.c

OBJS		=	$(SRCS:.c=.o)

CFLAGS		=	-Wall -Wextra -Werror

%.o			:	%.c ft_printf.h
				gcc ${CFLAGS} -c $< -o $@

${NAME}		:	${OBJS}
				cp ${LIBFT_PATH}/libft.a ${NAME}
				ar rcs ${NAME} $?

all			:	${NAME}

mk_libft	:
				@${MAKE} -C ${LIBFT_PATH}

test_m		:	all libft.a
				gcc ${CFLAGS} test_m.c ${NAME} ${LIBFT_PATH}/libft.a -o test_m

debug		: 	all
				gcc ${CFLAGS} -g test_m.c ${NAME} libft.a -o test_m

debug_putnbr:	all
				gcc ${CFLAGS} -g test_ft_putnbr_base.c ${NAME} libft.a -o test_putnbr

clean		:
				rm -rf ${OBJS}
				@${MAKE} -C ${LIBFT_PATH} clean

fclean		:	clean
				rm -rf ${NAME}
				@${MAKE} -C ${LIBFT_PATH} fclean

re			: 	fclean all

bonus		:
				@ echo "I haven't made bonus part"

.PHONY		:	all clean fclean re bonus