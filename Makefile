# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mike <mike@student.42.fr>                  +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/04/15 10:48:05 by mstupnik          #+#    #+#              #
#    Updated: 2020/05/05 12:50:56 by mike             ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

FLAGS = -Wall -Werror -Wextra

R= \033[0;31m

G= \033[0;32m

W = \033[0m

SRC = ft_memset.c \
	ft_bzero.c \
	ft_memcpy.c \
	ft_memccpy.c \
	ft_memmove.c \
	ft_memchr.c \
	ft_memcmp.c \
	ft_strlen.c \
	ft_strlcpy.c \
	ft_strlcat.c \
	ft_strchr.c \
	ft_strrchr.c \
	ft_strnstr.c \
	ft_strncmp.c \
	ft_atoi.c \
	ft_isalpha.c \
	ft_isdigit.c \
	ft_isascii.c \
	ft_isalnum.c \
	ft_isprint.c \
	ft_toupper.c \
	ft_tolower.c \
	ft_calloc.c \
	ft_strdup.c \
	ft_substr.c \
	ft_strjoin.c \
	ft_strtrim.c \
	ft_split.c \
	ft_itoa.c \
	ft_strmapi.c \
	ft_putchar_fd.c \
	ft_putstr_fd.c \
	ft_putendl_fd.c \
	ft_putnbr_fd.c \

SRC_B = ft_strnew_bonus.c \
		ft_memalloc_bonus.c \
		ft_memdel_bonus.c \
		ft_strcmp_bonus.c \
		ft_strstr_bonus.c

OBJ = $(SRC:%.c=%.o)

OBJ_B = $(SRC_B:%.c=%.o)

all: $(NAME)

$(NAME):
	@gcc -c $(SRC) $(FLAGS)
	@ar rc $(NAME) $(OBJ)
	@ranlib $(NAME)
	@echo "$(R)libft.a $(G)compiled successfully!$(W)"

bonus:
	@gcc -c $(SRC_B) $(FLAGS)
	@ar rc $(NAME) $(OBJ_B)
	@ranlib $(NAME)
	@echo "$(R)libft.a $(G)bonus part compiled successfully!$(W)"
	
clean:
	@rm -f $(OBJ) $(OBJ_B)
	@echo "$(R)libft.a $(G)object files deleted.$(W)"

fclean: clean
	@rm -f $(NAME)
	@echo "$(R)libft.a $(G)deleted.$(W)"

re: fclean all
