#include <stdio.h>
#include <unistd.h>

void	ft_putstr(char *str)
{
	while(*str != '\0')
	{
		write(1, &*str, 1);
		str++;
	}
}

int	main(void)
{
	char hello[] = "hello";

	ft_putstr(&hello[0]);	//fait le lien entre le *str et le tableau du char hello
}
