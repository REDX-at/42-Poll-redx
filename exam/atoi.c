/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   atoi.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aitaouss <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/06 15:42:32 by aitaouss          #+#    #+#             */
/*   Updated: 2023/09/07 15:21:32 by aitaouss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	atoi(char *str)
{
	int	i;
	int	msigns;
	int	nb;

	nb = 0;
	i = 0;

		while(str[i] >= 9 && str[i] <= 13 || str[i] == 32)
		{
			i++;
		}
		if(str[i] == '-' || str[i] == '+')
		{
			if(str[i] == '-')
			{
				msigns++;
			}
			i++;
		}
		while(str[i] >= 48 && str[i] <= 57)
		{
			nb *= 10;
			nb += str[i] - 48;
			i++;
		}
		if((msigns % 2) == 0)
		{
			return (nb);
		}
		return (-nb);
}
#include <stdio.h>
int	main()
{
	char	str[] = " ---+--+1234ab567";
	printf("%d", atoi(str));
}
