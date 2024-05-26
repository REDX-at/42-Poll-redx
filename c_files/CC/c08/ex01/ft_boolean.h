/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_boolean.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aitaouss <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/03 18:04:42 by aitaouss          #+#    #+#             */
/*   Updated: 2023/09/03 23:56:28 by aitaouss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_BOOLEAN_H
# define FT_BOOLEAN_H
# define TRUE  1
# define FALSE 0
# define SUCCESS 0
# define EVEN_MSG    "I have an even number of arguments.\n"
# define ODD_MSG     "I have an odd number of arguments.\n"
# define EVEN(nbr) (nbr % 2 == 0)

void	ft_putstr(char *str);

typedef int	t_bool;

#endif
