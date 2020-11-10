# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mmartin- <mmartin-@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/01/10 15:21:05 by mmartin-          #+#    #+#              #
#    Updated: 2020/11/10 20:45:26 by mmartin-         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

LIBFT_MSG	= @echo "\x1b[48;5;54m\x1b[38;5;15m\x1b[1m     libft\x1b[0m\x1b[0;90m $(1)\x1b[0m"

LIBFT_SRCS	= srcs/ft_memset.c \
			  srcs/ft_memcpy.c \
			  srcs/ft_memccpy.c \
			  srcs/ft_memmove.c \
			  srcs/ft_memchr.c \
			  srcs/ft_memdup.c \
			  srcs/ft_calloc.c \
			  srcs/ft_memcmp.c \
			  srcs/ft_bzero.c \
			  srcs/ft_strlen.c \
			  srcs/ft_strlcpy.c \
			  srcs/ft_strlcat.c \
			  srcs/ft_countdigits.c \
			  srcs/ft_strdup.c \
			  srcs/ft_strchr.c \
			  srcs/ft_strrchr.c \
			  srcs/ft_strnstr.c \
			  srcs/ft_strncmp.c \
			  srcs/ft_strcmp.c \
			  srcs/ft_atoi.c \
			  srcs/ft_isalpha.c \
			  srcs/ft_isdigit.c \
			  srcs/ft_isalnum.c \
			  srcs/ft_isascii.c \
			  srcs/ft_isprint.c \
			  srcs/ft_isspace.c \
			  srcs/ft_toupper.c \
			  srcs/ft_tolower.c \
			  srcs/ft_logn.c \
			  srcs/ft_split.c \
			  srcs/ft_substr.c \
			  srcs/ft_strjoin.c \
			  srcs/ft_strtrim.c \
			  srcs/ft_itoa.c \
			  srcs/ft_strmapi.c \
			  srcs/ft_split_free.c \
			  srcs/ft_split_count.c \
			  srcs/ft_itoa_base.c \
			  srcs/ft_putchar_fd.c \
			  srcs/ft_putstr_fd.c \
			  srcs/ft_putendl_fd.c \
			  srcs/ft_putnbr_fd.c \
			  srcs/ft_lstnew.c \
			  srcs/ft_lstlast.c \
			  srcs/ft_lstsize.c \
			  srcs/ft_lstadd_front.c \
			  srcs/ft_lstadd_back.c \
			  srcs/ft_lstdelone.c \
			  srcs/ft_lstclear.c \
			  srcs/ft_lstiter.c \
			  srcs/ft_lstmap.c
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
