/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aitaouss <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/18 01:40:58 by aitaouss          #+#    #+#             */
/*   Updated: 2023/08/19 19:24:18 by aitaouss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char	*str)
{
	int	count;

	count = 0;
	while (*str != '\0') 
	{
		count++;
		str++;
	}
	return (count);
}