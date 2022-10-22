# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    MakeFile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: nrallo <nrallo@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/10/03 12:46:06 by nrallo         #+#    #+#              #
#    Updated: 2022/10/19 13:48:20 by nrallo           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC    = gcc
CFLAG = -Wall -Werror -Wextra -c
NAME  = libft.a
SRCS   = src/ft_atoi.c \
	src/ft_bzero.c \
	src/ft_isalnum.c \
	src/ft_isalpha.c \
	src/ft_isascii.c \
	src/ft_isdigit.c \
	src/ft_isprint.c \
	src/ft_memchr.c \
	src/ft_memcmp.c \
	src/ft_memcpy.c \
	src/ft_memmove.c \
	src/ft_memset.c \
	src/ft_strlcat.c \
	src/ft_strlcpy.c \
	src/ft_strlen.c \
	src/ft_strncmp.c \
	src/ft_strnstr.c \
	src/ft_strrchr.c \
	src/ft_tolower.c \
	src/ft_toupper.c \
	src/ft_strchr.c \
	src/ft_strnstr.c \
	src/ft_calloc.c \
	src/ft_strdup.c
OBJS = $(SRCS:.c=.o)

all: $(NAME)

$(NAME): $(OBJS)
	ar rcs $(NAME) $(OBJS)

bourinette: clean
	clear
	gcc src/*.c bourinette.c -o $(NAME)

clean:
	/bin/rm -f src/*.o

fclean: clean
	/bin/rm -f $(NAME)

reset: fclean all