# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: htekeste <htekeste@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/01/21 12:49:07 by htekeste          #+#    #+#              #
#    Updated: 2023/02/11 16:18:52 by htekeste         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

DIRSRC		= ./srcs/

DIROBJ		= ./objs/

DIRLIB		= ./libft/

SRC			= ft_printf

SRCS		= $(addprefix ${DIRSRC}, $(addsuffix .c, ${SRC}))

OBJS		= ${SRCS:.c=.o}

NAME		= libftprintf.a


CC			= gcc
RM			= rm -f
AR			= ar -rcs
RN			= ranlib
INCS		= .

CFLAGS		= -Wall -Wextra -Werror

.c.o:
			${CC} ${CFLAGS} -c $< -o ${<:.c=.o}

$(NAME):	${OBJS}
			${AR} ${NAME} ${OBJS}

main:		$(NAME)
			${CC} -I ${DIRLIB} ${NAME} main.c

all:		$(NAME)

clean:
			${RM} ${OBJS}
			cd ${DIRLIB} && ${MAKE} clean

fclean:		clean
			${RM} $(NAME)

re:			fclean all

.PHONY:		all clean fclean re
