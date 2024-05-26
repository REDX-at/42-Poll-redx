/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   countalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aitaouss <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/07 12:36:38 by aitaouss          #+#    #+#             */
/*   Updated: 2023/09/07 12:48:10 by aitaouss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

void printConsecutiveCounts(char *str) {
    if (str[0] == '\0') {
        return;
    }

    char currentChar = str[0];
    int count = 1;

    for (int i = 1; str[i] != '\0'; i++) {
        if (str[i] == currentChar) {
            count++;
        } else {
            if (count > 1) {
                char output[10];
                int pos = sprintf(output, "%d%c, ", count, currentChar);
                write(STDOUT_FILENO, output, pos);
            }
            count = 1;
            currentChar = str[i];
        }
    }

    if (count > 1) {
        char output[10];
        int pos = sprintf(output, "%d%c, ", count, currentChar);
        write(STDOUT_FILENO, output, pos);
    }

    write(STDOUT_FILENO, "\n", 1);
}

int main() {
    char input[] = "aabbaacc"; // Replace with your input

    write(STDOUT_FILENO, "Consecutive character counts: ", 29);
    printConsecutiveCounts(input);

    return 0;
}

