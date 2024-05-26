/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   putnbr.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aitaouss <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/02 00:47:36 by aitaouss          #+#    #+#             */
/*   Updated: 2023/09/06 15:58:16 by aitaouss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}
void	ft_putnbr(int	nb)
{
	int	n;
	if(nb < 0)
	{
		ft_putchar('-');
		nb = -nb;
	}
	if(nb >= 10)
	{
		n = nb / 10;
		ft_putchar(n + '0');
	}
	ft_putchar(nb % 10 + '0');
}

int	main()
{
	int	nb = 500;

	ft_putnbr(nb);
}
