# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mmbatha <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/06/29 12:37:15 by mmbatha           #+#    #+#              #
#    Updated: 2018/06/29 13:49:41 by mmbatha          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
CC = gcc -Wall -Werror -Wextra
SRCFILES = ft_putchar.c ft_putendl.c ft_putstr.c ft_strchr.c ft_strdup.c \
		   ft_strjoin.c ft_strlen.c
SRCS = $(SRCFILES)
OBJS = $(SRCS:.c=.o)
HEADER = includes/get_next_line.h
HEADERFLAGS = $(addprefix -I , $(HEADER))
NORM = norminette -R CheckForbiddenSourceHeader 

all: $(NAME)

$(NAME): $(OBJS)
	ar rc $(NAME) $(OBJS)
	ranlib $(NAME)

norm:
	$(NORM)

%.o: %.c $(HEADER)
	$(CC) $(HEADERFLAGS) -c -o $@ $<

clean:
	/bin/rm -f *.o

fclean: clean
	/bin/rm -f $(NAME)

re: fclean all
