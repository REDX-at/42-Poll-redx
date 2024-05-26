/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aitaouss <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/06 15:52:53 by aitaouss          #+#    #+#             */
/*   Updated: 2023/09/07 15:11:10 by aitaouss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	putchar(char c)
{
	write(1, &c, 1);
}
void	ft_putnbr(int	nb)
{
	int	n;

	if (nb < 0)
	{
		putchar('-');
		nb = -nb;
	}
	if (nb > 9)
	{
		ft_putnbr(nb / 10);
		ft_putnbr(nb % 10);
	}
	else{
		putchar(nb % 10 + '0');

	}
}
int	main()
{
	ft_putnbr(2147483647);
}
