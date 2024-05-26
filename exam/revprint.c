/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   revprint.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aitaouss <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/06 19:27:01 by aitaouss          #+#    #+#             */
/*   Updated: 2023/09/06 19:31:48 by aitaouss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	len(char *str)
{
	int	i;
	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return i;
}
int	main(int ac, char **av)
{
	if(ac == 2)
	{
		int	i = len(av[1]) - 1;
		while(av[1][i] > 0)
		{
			write(1, &av[1][i], 1);
			i--;
		}

	}
	write(1, "\n", 1);
	return (0);
}