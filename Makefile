# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jgetgood <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/07/20 19:59:10 by jgetgood          #+#    #+#              #
#    Updated: 2022/07/20 20:01:20 by jgetgood         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC=cc
NAME=libft.a
CFLAGS=-Wall -Wextra -Werror
OPTIONS=-c -I.
SRC = ft_alnum.c		\
	   ft_atoi.c		\
	   ft_bzero.c		\
	   ft_calloc.c		\
	   ft_isalpha.c		\
	   ft_isascii.c		\
	   ft_isdigit.c		\
	   ft_isprint.c		\
	   ft_itoa.c		\
	   ft_memchr.c		\
	   ft_memcmp.c		\
	   ft_memcpy.c		\
	   ft_memmove.c		\
	   ft_memset.c		\
	   ft_strchr.c		\
	   ft_strdup.c		\
	   ft_strlcat.c		\
	   ft_strlcpy.c		\
	   ft_strlen.c		\
	   ft_strncmp.c		\
	   ft_strnstr.c		\
	   ft_strrchr.c		\
	   ft_tolower.c		\
	   ft_toupper.c

OBJ=*.o

all: $(NAME)

$(NAME): $(OBJ)
	ar -crs $(NAME) $(OBJ)

$(OBJ): $(SRC)
	$(CC) $(CFLAGS) $(OPTIONS) $(SRC)

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all	

.PHONY: clean fclean all re bonus
