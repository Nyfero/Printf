# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: gsap <gsap@student.42.fr>                  +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/05/20 14:07:19 by gsap              #+#    #+#              #
#    Updated: 2021/07/14 13:12:55 by gsap             ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


NAME = libftprintf.a

SRCS = ft_printf.c ft_check.c ft_aff.c ft_flags.c ft_char.c ft_str.c \
	ft_pointeur.c ft_int.c ft_hexa.c

OBJS = $(SRCS:.c=.o)

CC = gcc

AR = ar rc

RM = rm -f

CFLAGS = -Wall -Wextra -Werror

DIR = libft/

LIBFTMAKE = $(MAKE) -C $(DIR)

.c.o:
	${CC} ${CFLAGS} -c $< -o ${<:.c=.o}

$(NAME): $(OBJS) lmake
	$(AR) $(NAME) $(OBJS) $(DIR)*.o

lmake:
	$(LIBFTMAKE)

all: $(NAME)

bonus: all

clean:
	${RM} ${OBJS} $(DIR)*.o

fclean: clean
	${RM} ${NAME}

re: fclean all

.PHONY: all clean fclean re lmake bonus .c.o
