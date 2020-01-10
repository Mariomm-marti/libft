# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mmartin- <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/01/10 15:21:05 by mmartin-          #+#    #+#              #
#    Updated: 2020/01/10 17:04:29 by mmartin-         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS		= $(wildcard *.c)
OBJS		= ${SRCS:.c=.o}

NAME		= libft.a

.c.o:		
			gcc -Wall -Werror -Wextra -c $< -o ${<:.c=.o}

$(NAME):	${OBJS}
			ar -rc ${NAME} ${OBJS}
			ranlib ${NAME}

all:		${NAME}

clean:		
			rm -f ${OBJS}

fclean:		clean
			rm -f ${NAME}

re:			fclean all

.PHONY:		all clean fclean re
