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

SRCS	=	ft_printf.c

OBJS	=	${SRCS:.c=.o}

%.o		:	%.c
			gcc -Wall -Werror -Wextra $< -c

${NAME}	:	${OBJS}
			ar rcs $?

all		:	${NAME}

clean	:
			rm -rf ${OBJS}

fclean	:	clean
			rm -rf ${NAME}

re		: fclean all

bonus	:
		@ echo "I haven't made bonus part"

.PHONY	: all clean fclean re bonus