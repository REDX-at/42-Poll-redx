/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   first_word.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aitaouss <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/31 15:32:18 by aitaouss          #+#    #+#             */
/*   Updated: 2023/09/01 11:10:18 by aitaouss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int	ac, char **av)
{
	int	i = 0;

	if (ac == 2)
	{
		while(av[1][i] == ' ' || av[1][i] == '\t')
		{
			i++;
		}
		while(av[1][i] != '\0' && av[1][i] != ' ' && av[1][i] != '\t')
		{
			write(1, &av[1][i], 1);
			i++;
		}
	}
	write(1, "\n", 1);
	return (0);
}