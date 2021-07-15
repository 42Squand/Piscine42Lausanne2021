#include <stdio.h>

int	ft_str_is_alpha(char *str)
{
	while (*str != '\0')
	{
		if ((*str >= 'A' && *str <= 'Z') || (*str >= 'a' && *str <= 'z'))
		{
			str++;
		}
		else
		{
			return (0);
		}
	}
	return (1);
}

		

		


int	main(void)
{
	int x;
	char str[] = "";

	x = ft_str_is_alpha(&str[0]);
	printf("%d\n", x);
}
