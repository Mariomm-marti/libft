# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mmartin- <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/01/10 15:21:05 by mmartin-          #+#    #+#              #
#    Updated: 2020/02/05 13:48:17 by mmartin-         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS		= $(shell find . -name "*.c" ! -name "*_bonus.c")
OBJS		= ${SRCS:.c=.o}

SRCS_BONUS	= $(shell find . -name "*_bonus.c")
OBJS_BONUS = ${SRCS_BONUS:.c=.o}

NAME		= libft.a

.c.o:		
			@gcc -Wall -Werror -Wextra -c $< -o ${<:.c=.o} -I includes/

$(NAME):	${OBJS}
			@echo ">> Dependency 'libft' is being compiled..."
			@ar -rc ${NAME} ${OBJS}
			@ranlib ${NAME}

all:		${NAME}

bonus:		${OBJS} ${OBJS_BONUS}
			@echo ">> Dependency 'libft' is being compiled with bonus..."
			@ar -rc ${NAME} ${OBJS} ${OBJS_BONUS}
			@ranlib ${NAME}

clean:		
			@echo ">> Removing objects for 'libft'"
			@rm -f ${OBJS} ${OBJS_BONUS}

fclean:		clean
			@echo ">> Removing 'libft' dependency"
			@rm -f ${NAME}

re:			fclean bonus

.PHONY:		all clean fclean re bonus
