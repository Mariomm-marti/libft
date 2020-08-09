# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mmartin- <mmartin-@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/01/10 15:21:05 by mmartin-          #+#    #+#              #
#    Updated: 2020/08/09 13:23:55 by mmartin-         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

ECHO_MSG	= @echo "\x1b[1;45;mlibft\x1b[0;90m $(1)...\x1b[0m"

LIBFT_D		= srcs
LIBFT_I		= includes

SRCS		= $(shell find $(LIBFT_D) -type f -name "*.c")
OBJS		= $(SRCS:.c=.o)

PATH		= $(shell pwd)
NAME		= libft.a

%.o : %.c		
			@clang -Wall -Werror -Wextra -c $< -o $@ -O3 -march=skylake

$(NAME):	$(OBJS)
			$(call ECHO_MSG,"compiling")
			@ar -rcs $(NAME) $(OBJS)

all:		$(NAME)

# Deprecated, maintained for project integrity
bonus:		$(NAME)

clean:		
			$(call ECHO_MSG,"deleting objects")
			@rm -f $(OBJS)

fclean:		clean
			$(call ECHO_MSG,"deleting library")
			@rm -f $(PATH)/$(NAME)

re:			fclean $(NAME)

.PHONY:		all bonus clean fclean re
