/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lastword.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aitaouss <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/04 18:16:03 by aitaouss          #+#    #+#             */
/*   Updated: 2023/09/04 18:48:30 by aitaouss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	len(char *str)
{
	int	i = 0;
	while(str[i] != '\0')
	{
		i++;
	}
	return (i);
}
int	main(int ac, char **av)
{
	int	i = len(av[1]) - 1;
	if (ac == 2)
	{
		while(av[1][i] == 32 || av[1][i] == '\t')
		{
			i--;
		}
		while(av[1][i] != 32 && av[1][i] != '\t' && i >= 0)
		{
			i--;
		}
		i++;
		while(av[1][i] != 32 && av[1][i] != '\t' && av[1][i] != '\0')
		{
			write(1, &av[1][i], 1);
			i++;
		}
	}
	write(1, "\n", 1);
}