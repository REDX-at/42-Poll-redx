/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   count.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aitaouss <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/05 14:43:57 by aitaouss          #+#    #+#             */
/*   Updated: 2023/09/07 22:45:04 by aitaouss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int countWords(const char *str) {
    int count = 0;
    int i = 0; 
    int in_word = 0;

    while (str[i] != '\0') {
        if (str[i] == ' ' || str[i] == '\t') {
            in_word = 0;
        }
        else {
            if (in_word == 0) {
                count++;
                in_word = 1;
            }
        }
        i++;
    }

    return count;
}

int main(){
	printf("%d",countWords(" hatim re hhhh	nsdjcfn 			ndjndfjs nnnn   "));
}
