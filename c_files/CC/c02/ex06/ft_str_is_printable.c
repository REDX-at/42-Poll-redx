/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aitaouss <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/22 21:46:01 by aitaouss          #+#    #+#             */
/*   Updated: 2023/08/22 21:54:32 by aitaouss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_printable(char	*str)
{
	int	i;
	int	cfound;

	i = 0;
	cfound = 1;
	while (str[i])
	{
		if (str[i] >= 32 && str[i] <= 126)
		{
			i++;
		}
		else 
		{
			cfound = 0;
			break ;
		}
	}
	return (cfound);
}
