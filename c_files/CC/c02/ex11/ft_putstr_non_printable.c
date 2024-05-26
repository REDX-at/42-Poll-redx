/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aitaouss <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/26 23:27:53 by aitaouss          #+#    #+#             */
/*   Updated: 2023/09/06 23:23:56 by aitaouss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr_non_printable(char	*str)
{
	int	i;
	int	a;
	int	b;

	i = 0;
	while (str[i])
	{
		if ((str[i] >= 0 && str[i] <= 31) || (str[i] == 127))
		{
			ft_putchar('\\');
			a = (str[i] / 16);
			b = (str[i] % 16);
			ft_putchar("0123456789abcdef"[a]);
			ft_putchar("0123456789abcdef"[b]);
		}
		else
		{
			ft_putchar(str[i]);
		}
		i++;
	}
}
