# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jgetgood <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/07/08 15:11:38 by jgetgood          #+#    #+#              #
#    Updated: 2022/07/18 13:07:51 by jgetgood         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
CC = gcc
CFLAGS = -Wall -Wextra -Werror
OPTIONS = c -o
RM = rm -f

SRCS = ft_mem*.c ft_str*.c ft_to*.c ft_is*.c ft_atoi.c ft_bzero.c ft_calloc.c     \
	   ft_substr.c ft_split.c ft_itoa.c ft_put*.c
OBJS = $(SRCS:.c=.o)

all: $(NAME)

$(NAME): $(OBJS)
	$(CC) $(CFLAGS) $(SRCS)
	ar rcs $(NAME) $(OBJS)

$(OBJS): $(SRCS)
	$(CC) $(CFLAGS) $(OPTIONS) $(SRCS)

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re
