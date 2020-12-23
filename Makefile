# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mmartin- <mmartin-@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/01/10 15:21:05 by mmartin-          #+#    #+#              #
#    Updated: 2020/12/23 22:19:30 by mmartin-         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

LIBFT_MSG	= @echo "  \x1b[45m\x1b[38;2;16;19;33m\x1b[45m\x1b[01;37m      libft \x1b[0m\x1b[35m\x1b[0m\x1b[0;90m $(1)\x1b[0m"

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
LIBFTM_SRCS	= srcs/vec3_dot.c \
			  srcs/vec3_len.c \
			  srcs/vec3_add.c \
			  srcs/vec3_sub.c \
			  srcs/vec3_mult.c \
			  srcs/vec3_normalize.c \
			  srcs/vec3_cross.c \
			  srcs/mat44_inverse.c \
			  srcs/mat44_init_identity.c \
			  srcs/mat44_init_value.c \
			  srcs/mat44_mult.c \
			  srcs/mat44_transpose.c \
			  srcs/mat44_point_trans.c \
			  srcs/mat44_vec3_trans.c
LIBFT_OBJS	= $(LIBFT_SRCS:.c=.o)
LIBFTM_OBJS	= $(LIBFTM_SRCS:.c=.o)

LIBFT_OUT	= "."
LIBFT_NAME	= libft.a

%.o : %.c
					@printf "  \x1b[45m\x1b[38;2;16;19;33m\x1b[45m\x1b[01;37m      libft \x1b[0m\x1b[35m\x1b[0m\x1b[0;90m Compiling \x1b[0;35m$@...         \x1b[0m\r"
					@clang -Wall -Werror -Wextra -c $< -o $@ -O3 -march=skylake

$(LIBFT_NAME):	$(LIBFT_OBJS)
					@echo ""
					$(call LIBFT_MSG,"Linking objects into $(LIBFT_OUT)/$(LIBFT_NAME)")
					@ar -rcs $(LIBFT_OUT)/$(LIBFT_NAME) $(LIBFT_OBJS)
					$(call LIBFT_MSG,"Finished linking")
					@echo ""

math:			$(LIBFT_OBJS) $(LIBFTM_OBJS)
					@echo ""
					$(call LIBFT_MSG,"⚠ Compiling with mathematics library extension at $(LIBFT_OUT)/$(LIBFT_NAME)")
					@ar -rcs $(LIBFT_OUT)/$(LIBFT_NAME) $(LIBFT_OBJS) $(LIBFTM_OBJS)
					$(call LIBFT_MSG,"Finished linking library with mathematics extension")
					@echo ""

all:			$(LIBFT_NAME)

bonus:			$(LIBFT_NAME)

clean:
					@echo ""
					$(call LIBFT_MSG,"Deleting all objects...")
					@rm -f $(LIBFT_OBJS) $(LIBFTM_OBJS)

fclean:			clean
					$(call LIBFT_MSG,"Deleting $(LIBFT_OUT)/$(LIBFT_NAME)...","\n")
					@rm -f $(LIBFT_OUT)/$(LIBFT_NAME)
					@echo ""

re:				fclean $(LIBFT_NAME)

remath:			fclean math

.PHONY:			math all bonus clean fclean re remath
