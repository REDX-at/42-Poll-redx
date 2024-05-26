/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fizzbuz.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aitaouss <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/31 17:54:57 by aitaouss          #+#    #+#             */
/*   Updated: 2023/09/07 12:50:21 by aitaouss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include <unistd.h>

void printConsecutiveCounts(char *str) {
    int length = strlen(str);
    
    if (length == 0) {
        return;
    }

    char output[50]; // Assuming a maximum output length of 50 characters
    int pos = 0;

    for (int i = 0; i < length; i++) {
        char currentChar = str[i];
        int count = 1;

        // Count the occurrences of the current character
        for (int j = i + 1; j < length; j++) {
            if (str[j] == currentChar) {
                count++;
            } else {
                break;
            }
        }

        // Add the count and character to the output buffer
        if (count > 1) {
            pos += sprintf(output + pos, "%d%c, ", count, currentChar);
        }

        // Skip the repeated characters
        i += count - 1;
    }

    if (pos > 0) {
        output[pos - 2] = '\n'; // Replace the last ", " with a newline
        write(STDOUT_FILENO, output, pos - 1);
    }
}

int main() {
    char input[] = "aabbaacc"; // Replace with your input

    write(STDOUT_FILENO, "Consecutive character counts: ", 29);
    printConsecutiveCounts(input);

    return 0;
}

