# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mstupnik <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/09/19 12:49:46 by mstupnik          #+#    #+#              #
#    Updated: 2019/09/19 13:30:00 by mstupnik         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

FLAGS = -Wall -Werror -Wextra -I. -c

SRC = ft_bzero.c\
	  ft_isascii.c\
	  ft_memccpy.c\
	  ft_memcpy.c\
	  ft_strcat.c\
	  ft_strcpy.c\
	  ft_strlen.c\
	  ft_strnstr.c\
	  ft_tolower.c\
	  ft_isalnum.c\
	  ft_isdigit.c\
	  ft_memchr.c\
	  ft_memmove.c\
	  ft_strchr.c\
	  ft_strdup.c\
	  ft_strncat.c\
	  ft_strrchr.c\
	  ft_toupper.c\
	  ft_atoi.c\
	  ft_isalpha.c\
	  ft_isprint.c\
	  ft_memcmp.c\
	  ft_memset.c\
	  ft_strcmp.c\
	  ft_strlcat.c\
	  ft_strncpy.c\
	  ft_strstr.c\

OBJ = $(SRC:.c = .o)

all: $(NAME)
	
$(NAME): $(OBJ)
	ar rc $(NAME) $(OBJ)
	ranlib $(NAME)

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all
