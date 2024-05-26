# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aitaouss <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/09/04 15:54:23 by aitaouss          #+#    #+#              #
#    Updated: 2023/09/04 22:12:26 by aitaouss         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = gcc
CFLAGS = -Wall -Wextra -Werror

SRCS_DIR = srcs
INCLUDES_DIR = includes

SRCS = $(addprefix $(SRCS_DIR)/, ft_putchar.c ft_swap.c ft_putstr.c ft_strlen.c ft_strcmp.c)
OBJS = $(SRCS:.c=.o)

LIBRARY = libft.a

all: $(LIBRARY)

$(LIBRARY): $(OBJS)
	ar rc $(LIBRARY) $(OBJS)
	ranlib $(LIBRARY)

%.o: %.c
	$(CC) $(CFLAGS) -I$(INCLUDES_DIR) -o $@ -c $<

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(LIBRARY)

re: fclean all

.PHONY: all clean fclean re

