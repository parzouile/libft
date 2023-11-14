# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aschmitt <aschmitt@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/11/07 23:35:16 by aschmitt          #+#    #+#              #
#    Updated: 2023/11/14 11:52:13 by aschmitt         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = gcc
FLAGS = -Wall -Wextra -Werror

NAME = libft.a
SRCS =	ft_atoi.c ft_bzero.c ft_calloc.c ft_isalnum.c ft_isalpha.c \
        	ft_isascii.c ft_isdigit.c ft_isprint.c ft_memchr.c \
        	ft_memcmp.c ft_memcpy.c ft_memmove.c ft_memset.c ft_strchr.c \
       		ft_strdup.c ft_strlcat.c ft_strlcpy.c ft_strlen.c ft_strncmp.c \
        	ft_strnstr.c ft_strrchr.c ft_tolower.c ft_toupper.c \
			ft_itoa.c ft_putchar_fd.c ft_putendl_fd.c ft_putnbr_fd.c ft_putstr_fd.c \
			ft_split.c ft_strjoin.c ft_strmapi.c ft_strtrim.c ft_substr.c ft_striteri.c 
			
BONUS = ft_lstadd_back_bonus.c  ft_lstadd_front_bonus.c  ft_lstclear_bonus.c  ft_lstdelone_bonus.c \
			ft_lstiter_bonus.c  ft_lstlast_bonus.c  ft_lstnew_bonus.c  ft_lstsize_bonus.c  ft_lstmap_bonus.c

HEADER = libft.h
OBJS = ${SRCS:.c=.o}
OBJSBONUS = ${SRCS:.c=.o}  ${BONUS:.c=.o}

all : ${NAME}

bonus : ${OBJSBONUS}
	ar rc ${NAME} ${OBJSBONUS} 

${NAME} : ${OBJS} 
	ar rc ${NAME} ${OBJS} 

%.o : %.c ${HEADER} Makefile
	${CC} ${FLAGS}   -o $@ -c $<

clean :
	rm -f ${OBJSBONUS}

fclean : clean
	rm -f ${NAME}

re : fclean all

.PHONY : all clean fclean re bonus