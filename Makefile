# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: hyap <hyap@student.42kl.edu.my>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/01/20 01:37:37 by hyap              #+#    #+#              #
#    Updated: 2022/01/21 01:18:03 by hyap             ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS = ${wildcard srcs/*.c}

OBJS = ${SRCS:.c=.o}

CC = gcc

FLAGS = -Wall -Werror -Wextra

NAME = libftprintf.a

RM = rm -f

.c.o:
	${CC} ${FLAGS} -I includes -c $< -o ${<:.c=.o}

all: ${NAME}

${NAME}: ${OBJS}
	ar rc ${NAME} ${OBJS}
	ranlib ${NAME}

clean:
	${RM} ${OBJS}

fclean: clean
	${RM} ${NAME}

debug:
	${CC} -g main.c ${NAME}

re: fclean all

reclean: all clean

printf:
	${CC} ${FLAGS} main.c ${NAME}

.PHONY: all clean fclean re
