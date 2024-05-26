#include <unistd.h>

int	len(char *str)
{
	int	i;

	i = 0;
	while(str[i] != '\0')
	{
		i++;
	}
	return i;
}

#include <stdio.h>
int	main()
{
	char	str[] = "hello";
	printf("%d" , len(str));
}
