/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   countwrd.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aitaouss <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/07 13:06:52 by aitaouss          #+#    #+#             */
/*   Updated: 2023/09/07 13:23:56 by aitaouss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	countwrd(char *str)
{
	int	i = 0;
	int	count = 0;

	while(str[i] != '\0')
	{
		while ((str[i] == ' ' || str[i] == '\t') && str[i] != '\0')
		{
			i++;
		}
		if(str[i] != '\0')
		{
			count++;
		}
		while(str[i] != ' ' && str[i] != '\t' && str[i] != '\0')
		{
			i++;
		}
	}
	return (count);
}

int	main()
{
	char	str[] = "";

	printf("%d", countwrd(str));
}
