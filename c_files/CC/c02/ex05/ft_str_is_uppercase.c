/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aitaouss <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/22 19:51:03 by aitaouss          #+#    #+#             */
/*   Updated: 2023/08/27 16:17:34 by aitaouss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_uppercase(char *str)
{
	int	i;
	int	cfound;

	i = 0;
	cfound = 1;
	while (str[i])
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
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
