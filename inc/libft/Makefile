# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: kgebski <kgebski@student.42wolfsburg.de    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/12/28 15:54:41 by karol             #+#    #+#              #
#    Updated: 2023/05/31 11:04:21 by kgebski          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS = ft_putchar_fd.c ft_strmapi.c ft_atoi.c ft_putendl_fd.c \
	ft_strncmp.c ft_bzero.c ft_putnbr_fd.c ft_strnstr.c ft_calloc.c \
	ft_putstr_fd.c ft_strrchr.c ft_isalnum.c ft_split.c ft_strtrim.c \
	ft_isalpha.c ft_strchr.c ft_substr.c ft_isascii.c ft_strdup.c \
	ft_tolower.c ft_isdigit.c ft_memchr.c ft_striteri.c ft_toupper.c \
	ft_isprint.c ft_memcmp.c ft_strjoin.c ft_itoa.c ft_memcpy.c \
	ft_strlcat.c ft_memmove.c ft_strlcpy.c ft_memset.c ft_strlen.c ft_abs.c

SRCSB	= ft_lstadd_front.c \
	ft_lstadd_back.c ft_lstsize.c ft_lstnew.c \
	ft_lstlast.c ft_lstpenultimate.c

OBJS	= $(SRCS:.c=.o)
OBJSB	= $(SRCSB:.c=.o)
NAME	= libft.a
LIBR	= ranlib
CFLAGS	= -Wall -Wextra -Werror

.c.o:
	gcc ${CFLAGS} -c $< -o ${<:.c=.o} -I .

${NAME}: ${OBJS}
	ar rcs ${NAME} ${OBJS}
	ranlib ${NAME}

all: ${NAME}

clean:
	rm -f ${OBJS} ${OBJSB}

fclean: clean
	rm -f ${NAME}

re: fclean all

bonus: ${OBJS} ${OBJSB}
	ar rcs ${NAME} ${OBJS} ${OBJSB}
	ranlib ${NAME}

.PHONY: all clean fclean re bonus
