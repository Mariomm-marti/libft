# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mmartin- <mmartin-@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/01/10 15:21:05 by mmartin-          #+#    #+#              #
#    Updated: 2020/08/27 04:59:32 by mmartin-         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

LIBFT_MSG	= @echo "\x1b[48;5;54m\x1b[38;5;15m\x1b[1m     libft\x1b[0m\x1b[0;90m $(1)\x1b[0m"

LIBFT_SRCS	= $(wildcard srcs/*)
LIBFT_OBJS	= $(LIBFT_SRCS:.c=.o)

LIBFT_OUT	= "."
LIBFT_NAME	= libft.a

%.o : %.c
					@printf "\x1b[48;5;54m\x1b[38;5;15m\x1b[1m     libft\x1b[0m\x1b[0;90m Compiling $@...       \x1b[0m\r"
					@clang -Wall -Werror -Wextra -c $< -o $@ -O3 -march=skylake

$(LIBFT_NAME):	$(LIBFT_OBJS)
					$(call LIBFT_MSG,"Linking objects into $(LIBFT_OUT)/$(LIBFT_NAME)","\n")
					@ar -rcs $(LIBFT_OUT)/$(LIBFT_NAME) $(LIBFT_OBJS)
					$(call LIBFT_MSG,"Finished linking","\n")

all:			$(LIBFT_NAME)

bonus:			$(LIBFT_NAME)

clean:
					$(call LIBFT_MSG,"Deleting all objects...","\n")
					@rm -f $(LIBFT_OBJS)

fclean:			clean
					$(call LIBFT_MSG,"Deleting $(LIBFT_OUT)/$(LIBFT_NAME)...","\n")
					@rm -f $(LIBFT_OUT)/$(LIBFT_NAME)

re:				fclean $(LIBFT_NAME)

.PHONY:			all bonus clean fclean re
