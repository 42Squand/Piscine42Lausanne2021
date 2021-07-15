#include <stdio.h>

int	ft_str_is_numeric(char *str)
{
	while (*str != '\0')
	{
		if (*str >= '0' && *str <= '9')
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
	int num;
	char str[] = "12345";

	num = ft_str_is_numeric(&str[0]);
	printf("%d\n", num);
}
