/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aitaouss <aitaouss@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/26 23:03:37 by alaalalm          #+#    #+#             */
/*   Updated: 2023/11/01 15:53:27 by aitaouss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(const char *str)
{
	int	i;
	int	numbers;
	int	msigns;

	i = 0;
	numbers = 0;
	msigns = 0;
	while ((str[i] >= 9 && str[i] <= 13) || str[i] == 32)
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			msigns++;
		i++;
	}
	while (str[i] >= 48 && str[i] <= 57)
	{
		numbers *= 10;
		numbers += str[i] - 48;
		i++;
	}
	if (!(msigns % 2))
		return (numbers);
	return (-numbers);
}
