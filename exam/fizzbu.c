/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fizzbu.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aitaouss <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/06 15:28:05 by aitaouss          #+#    #+#             */
/*   Updated: 2023/09/07 14:50:25 by aitaouss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_write(int nb)
{
	if(nb > 9)
	{
		ft_write(nb / 10);
	}
	write(1, &"0123456789"[nb % 10], 1);
}

int	main(void)
{
	int	nb;

	nb = 1;
	while(nb <= 100)
	{
		if(nb % 3 == 0 && nb % 5 == 0)
		{
			write(1, "fizzbuzz", 8);
		}
		else if(nb % 3 == 0)
		{
			write(1, "fizz", 4);
		}
		else if(nb % 5 == 0)
		{
			write(1, "buzz", 4);
		}
		else 
		{
			ft_write(nb);
		}
		write(1, "\n", 1);
		nb++;
	}
	
}
