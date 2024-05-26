/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aitaouss <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/23 14:23:05 by aitaouss          #+#    #+#             */
/*   Updated: 2023/08/26 18:03:12 by aitaouss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	ft_upercase(char s)
{
	if (s >= 'a' && s <= 'z')
	{
		s = s - 32;
	}
	return (s);
}

char	*ft_strcapitalize(char	*str)
{
	int	i;

	str[0] = ft_upercase(str[0]);
	i = 0;
	while (str[i] != '\0')
	{
		if (str[i + 1] >= 'A' && str[i + 1] <= 'Z')
		{
			str[i + 1] = str[i + 1] + 32;
		}
		if ((str[i] < '0') || (str[i] > '9' && str[i] < 'A')
			|| (str[i] > 'Z' && str[i] < 'a') || (str[i] > 'z'))
		{
			str[i + 1] = ft_upercase(str[i + 1]);
		}
		i++;
	}
	return (str);
}
