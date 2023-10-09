# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aschmitt <aschmitt@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/08/10 14:47:44 by aschmitt          #+#    #+#              #
#    Updated: 2023/08/10 14:47:44 by aschmitt         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

LIBC =	ft_atoi.c ft_bzero.c ft_calloc.c ft_isalnum.c ft_isalpha.c \
			ft_isascii.c ft_isdigit.c ft_isprint.c ft_memchr.c \
			ft_memcmp.c ft_memcpy.c ft_memmove.c ft_memset.c ft_strchr.c \
			ft_strdup.c ft_strlcat.c ft_strlcpy.c ft_strlen.c ft_strncmp.c \
			ft_strnstr.c ft_strrchr.c ft_tolower.c ft_toupper.c 

CC = gcc -Wall -Wextra -Werror
EXEC = chien
SRC = $(wildcard *.c)
OBJS = $(SRC:.c=.o)
FLAGS = -Wall -Werror -Wextra -I ./

all : $(EXEC)

.c.o:
		${CC} ${FLAGS} -c $< -o ${<:.c=.o}

$(EXEC) : $(OBJS)
	ar -rsc libft.a ${OBJS}

clean :
	rm  $(OBJS)

fclean : clean
	rm -f $(EXEC)

re : fclean all

.PHONY: all clean fclean re