/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ptnbr.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aitaouss <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/07 14:50:36 by aitaouss          #+#    #+#             */
/*   Updated: 2023/09/07 14:59:08 by aitaouss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	putchar(char c)
{
	write(1, &c, 1);
}

void	ptnbr(int nb)
{
	if(nb == -2147483648)
	{
		write(1, "-2147483648", 11);
		return;
	}
	if (nb < 0)
	{
		putchar('-');
		nb = -nb;
	}
	if(nb > 9)
	{
		ptnbr(nb /10);
	}
	putchar(nb % 10  + '0');
}
int	main()
{
	ptnbr(-2147483648);
}