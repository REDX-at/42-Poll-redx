/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lastpara.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aitaouss <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/04 18:11:25 by aitaouss          #+#    #+#             */
/*   Updated: 2023/09/04 18:15:35 by aitaouss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int ac, char **av)
{
	int	i = 0;

	 if(ac != 1)
	 {
	 	while(av[ac - 1][i] != '\0')
		{
			write(1, &av[ac - 1][i] , 1);
			i++;
		}
	 }
	 write(1, "\n", 1);
}