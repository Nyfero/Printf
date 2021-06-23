# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: gsap <marvin@42.fr>                        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/05/20 14:07:19 by gsap              #+#    #+#              #
#    Updated: 2021/06/21 11:15:56 by gsap             ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


NAME 	= libffptintf.a

SRCLIB	= ${DIR}ft_memset.c \
			${DIR}ft_bzero.c \
			${DIR}ft_memcpy.c \
		  ${DIR}ft_memccpy.c \
			${DIR}ft_memmove.c \
			${DIR}ft_memchr.c \
			${DIR}ft_memcmp.c \
			${DIR}ft_strlen.c \
			${DIR}ft_isalpha.c \
			${DIR}ft_isdigit.c \
			${DIR}ft_isalnum.c \
			${DIR}ft_isascii.c \
			${DIR}ft_isprint.c \
			${DIR}ft_toupper.c \
			${DIR}ft_tolower.c \
			${DIR}ft_strchr.c \
			${DIR}ft_strrchr.c \
			${DIR}ft_strncmp.c \
			${DIR}ft_strlcpy.c \
			${DIR}ft_strlcat.c \
			${DIR}ft_strnstr.c \
			${DIR}ft_atoi.c \
			${DIR}ft_calloc.c \
			${DIR}ft_strdup.c \
			${DIR}ft_substr.c \
			${DIR}ft_strjoin.c \
			${DIR}ft_strjoin_and_free.c \
			${DIR}ft_strtrim.c \
			${DIR}ft_split.c \
			${DIR}ft_itoa.c \
			${DIR}ft_strmapi.c \
			${DIR}ft_putchar_fd.c \
			${DIR}ft_putstr_fd.c \
			${DIR}ft_putendl_fd.c \
			${DIR}ft_putnbr_fd.c \
			${DIR}ft_putchar.c \
			${DIR}ft_putstr.c \
			${DIR}ft_putnbr.c \
			${DIR}ft_lstnew.c \
			${DIR}ft_lstadd_front.c \
			${DIR}ft_lstsize.c \
			${DIR}ft_lstlast.c \
			${DIR}ft_lstadd_back.c \
			${DIR}ft_lstdelone.c \
			${DIR}ft_lstclear.c \
			${DIR}ft_lstiter.c \
			${DIR}ft_lstmap.c

SRCS	=	ft_printf.c

DIR		=	libft/

OBJS 	= ${SRCS:.c=.o}

OBJSLIB = ${SRCLIB:.c=.o}

CC 		= gcc

AR		= ar rc

RM		= rm -f

CFLAGS	= -Wall -Wextra -Werror

.c.o:
			${CC} ${CFLAGS} -c $< -o ${<:.c=.o}

$(NAME): ${OBJS} ${OBJSLIB}
			${AR} ${NAME} ${OBJS} ${OBJSLIB}

all:		${NAME}

clean:
			${RM} ${OBJS} ${OBJSLIB}

fclean: 	clean
			${RM} ${NAME}

re: 		fclean all

.PHONY:		all clean fclean re
