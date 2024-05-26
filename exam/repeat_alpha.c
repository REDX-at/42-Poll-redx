/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   repeat_alpha.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aitaouss <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/01 09:50:54 by aitaouss          #+#    #+#             */
/*   Updated: 2023/09/06 18:55:52 by aitaouss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int ac, char **av)
{
	int	i = 0;
	int	p;
	int	j;

	if(ac == 2)
	{
		while(av[1][i] != '\0')
		{
			int	s;
			if(av[1][i] >= 'a' && av[1][i] <= 'z')
			{	
				p = av[1][i] - 'a' + 1;
				s = 0;
				while(s < p)
				{
					write(1, &av[1][i] , 1);
					s++;
				}
			}
			
			else if(av[1][i] >= 'A' && av[1][i] <= 'Z')
			{
				j = av[1][i] - 'A' + 1;
				s = 0;
				while (s < j)
				{
					write(1, &av[1][i] , 1);
					s++;
				}
			}
			else
			{
				write(1, &av[1][i], 1);
			}
			i++;
		}
	}
	write(1, "\n", 1);
	return (0);
}
