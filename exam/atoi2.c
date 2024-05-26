/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   atoi2.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aitaouss <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/07 14:59:27 by aitaouss          #+#    #+#             */
/*   Updated: 2023/09/07 15:30:49 by aitaouss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	atoi(char *str)
{
	int	i = 0;
	int	msign = 0;
	int	nb = 0;
	
	while((str[i] >= 9 && str[i] <= 13) || str[i] == 32)
	{
		i++;
	}
	if(str[i] == '-' || str[i] == '+')
	{
		if(str[i] == '-')
		{
			msign++;
		}
		i++;
	}
	while(str[i] >= 48 && str[i] <= 57)
	{
		nb *= 10;
		nb += str[i] - 48;
		i++;
	}
	if(msign % 2 == 0)
	{
		return (nb);
	}
	return (-nb);
}
#include <stdio.h>
int	main()
{
	char	str[] = " \n\n\n\n-++++------1234ab567";
	printf("%d", atoi(str));
}
