# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mstupnik <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/09/19 12:49:46 by mstupnik          #+#    #+#              #
#    Updated: 2019/09/19 14:31:53 by mstupnik         ###   ########.fr        #
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
	  ft_strncmp.c\
	  ft_strlcat.c\
	  ft_strncpy.c\
	  ft_strstr.c\

OBJ = ft_bzero.o\
	  ft_isascii.o\
	  ft_memccpy.o\
	  ft_memcpy.o\
	  ft_strcat.o\
	  ft_strcpy.o\
	  ft_strlen.o\
	  ft_strnstr.o\
	  ft_tolower.o\
	  ft_isalnum.o\
	  ft_isdigit.o\
	  ft_memchr.o\
	  ft_memmove.o\
	  ft_strchr.o\
	  ft_strdup.o\
	  ft_strncat.o\
	  ft_strrchr.o\
	  ft_toupper.o\
	  ft_atoi.o\
	  ft_isalpha.o\
	  ft_isprint.o\
	  ft_memcmp.o\
	  ft_memset.o\
	  ft_strcmp.o\
	  ft_strncmp.o\
	  ft_strlcat.o\
	  ft_strncpy.o\
	  ft_strstr.o\

all: $(NAME)
	
$(NAME):
	gcc $(FLAGS) $(SRC)
	ar rc $(NAME) $(OBJ)
	ranlib $(NAME)

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: clean fclean
