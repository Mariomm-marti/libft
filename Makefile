# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mmartin- <mmartin-@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/01/10 15:21:05 by mmartin-          #+#    #+#              #
#    Updated: 2020/08/09 11:36:16 by mmartin-         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

ECHO_MSG	= @echo "\x1b[1;45;mlibft\x1b[0;90m $(1)...\x1b[0m"

SRCS		= $(shell find srcs/ -name "*.c" ! -name "*_bonus.c")
OBJS		= ${SRCS:.c=.o}

SRCS_BONUS	= $(shell find srcs/ -name "*_bonus.c")
OBJS_BONUS	= ${SRCS_BONUS:.c=.o}

NAME		= libft.a

.c.o:		
			@clang -Wall -Werror -Wextra -c $< -o ${<:.c=.o} -O3 -march=skylake

$(NAME):	${OBJS}
			$(call ECHO_MSG,"compiling")
			@ar -rc ${NAME} ${OBJS}
			@ranlib ${NAME}

all:		${NAME}

bonus:		${OBJS} ${OBJS_BONUS}
			$(call ECHO_MSG,"compiling with bonus")
			@ar -rc ${NAME} ${OBJS} ${OBJS_BONUS}
			@ranlib ${NAME}

clean:		
			$(call ECHO_MSG,"deleting objects")
			@rm -f ${OBJS} ${OBJS_BONUS}

fclean:		clean
			$(call ECHO_MSG,"deleting library")
			@rm -f ${NAME}

re:			fclean bonus

.PHONY:		all clean fclean re bonus
