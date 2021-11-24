# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: llethuil <llethuil@student.42lyon.fr>      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/11/15 10:50:16 by llethuil          #+#    #+#              #
#    Updated: 2021/11/24 14:20:19 by llethuil         ###   ########lyon.fr    #
#                                                                              #
# **************************************************************************** #

NAME = ./libftprintf.a

OBJS = ${SRCS:.c=.o}

LIBFT_AR =./libft/libft.a

INCS = ft_printf.h

SRCS = 	ft_printf.c \
		./srcs/ft_arg_len.c \
		./srcs/ft_convert_arg.c \
		./srcs/ft_len_signed.c \
		./srcs/ft_len_unsigned.c \
		./srcs/ft_putnbr_base.c \
		./srcs/ft_putnbr_unsigned_fd.c \
		./srcs/ft_putstr_printf_fd.c \

CC = gcc

CFLAGS = -Wall -Wextra -Werror

RM = rm -f

%.o: %.c ${INCS} ${LIBFT_AR}
	${CC} ${CFLAGS} -c $< -o $@

all : libft ${NAME}

${NAME}: ${OBJS}
	cp ${LIBFT_AR} ${NAME}
	ar rcs ${NAME} ${OBJS}

libft:
	make -C ./libft

clean:
	${RM} ${OBJS}
	make clean -C ./libft

fclean: clean
	${RM} ${NAME}
	make fclean -C ./libft

re: fclean all

.PHONY: all libft clean fclean re
