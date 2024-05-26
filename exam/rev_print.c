/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rev_print.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aitaouss <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/31 14:31:49 by aitaouss          #+#    #+#             */
/*   Updated: 2023/09/06 19:26:56 by aitaouss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_len(char	*str)
{
	int	i = 0;
	while(str[i] != '\0')
	{
		i++;
	}
	return i;
}
char	*ft_rev_pint(char	*str)
{
	int	i = ft_len(str) - 1;

	while(i >= 0)	
	{
		write(1, &str[i] , 1);
		i--;
	}
	return (str);
}

#include <stdio.h>
int	main()
{
	char	str[] =  "hello world";
	ft_rev_pint(str);
}
