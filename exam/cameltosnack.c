/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cameltosnack.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aitaouss <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/07 17:49:48 by aitaouss          #+#    #+#             */
/*   Updated: 2023/09/07 19:13:35 by aitaouss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	putchar(char c)
{
	write(1, &c, 1);
}

int	main(int ac, char **av)
{
	if(ac == 2)
	{
		int	i = 0;

		while(av[1][i] != '\0')
		{
			if(av[1][i] >= 'A' && av[1][i] <= 'Z')
			{
				av[1][i] += 32;
				putchar('_');
				write(1, &av[1][i], 1);
			}
			else
			{
				write(1, &av[1][i], 1);
			}
			i++;
		}
	}
	write(1, "\n", 1);
	return 0;
}
