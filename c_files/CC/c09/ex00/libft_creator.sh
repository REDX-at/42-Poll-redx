# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    libft_creator.sh                                   :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aitaouss <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/09/04 13:23:32 by aitaouss          #+#    #+#              #
#    Updated: 2023/09/04 22:06:16 by aitaouss         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

#!/bin/sh

gcc -c ft_putchar.c ft_swap.c ft_putstr.c ft_strlen.c ft_strcmp.c
ar rc libft.a ft_putchar.o ft_swap.o ft_putstr.o ft_strlen.o ft_strcmp.o
ranlib libft.a
rm -f ft_putchar.o ft_swap.o ft_putstr.o ft_strlen.o ft_strcmp.o
echo "libft.a has been created."

