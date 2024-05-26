#include <unistd.h>

int main(int ac, char **av)
{
    char s[256] = {0}; // Array to track encountered characters
    int i;
    int j;

    i = 0;
    j = 1;

    if (ac == 3)
    {
        // First pass: Mark characters as encountered
        while (j < 3)
        {
            while (av[j][i])
            {
                char currentChar = av[j][i]; // Get the current character
                int charIndex = (int)currentChar; // Convert the character to its integer value (ASCII)

                s[charIndex] = 1; // Mark the character as encountered

                i++; // Move to the next character
            }
            i = 0; // Reset index for the next argument
            j++; // Move to the next argument
        }

        j = 1; // Reset argument index to 1

        // Second pass: Print and mark unique characters
        while (j < 3)
        {
            while (av[j][i])
            {
                char currentChar = av[j][i]; // Get the current character
                int charIndex = (int)currentChar; // Convert the character to its integer value (ASCII)

                if (s[charIndex] == 1) // If character is encountered only once
                {
                    write(1, &av[j][i], 1); // Print the character
                    s[charIndex] = 2; // Mark character as printed
                }

                i++; // Move to the next character
            }
            i = 0; // Reset index for the next argument
            j++; // Move to the next argument
        }
    }

    write(1, "\n", 1);

    return 0;
}
