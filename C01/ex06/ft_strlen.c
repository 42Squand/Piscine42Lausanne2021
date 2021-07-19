#include <stdio.h>
#include <unistd.h>

int	ft_strlen(char *str)
{
	int	charnum = 0;
	while ( *str != '\0')
	{
		str++;
		charnum++;
	}
	return (charnum);
}

int	main(void)
{
	int	charnum;
	char tab[] = "hello";
	charnum = ft_strlen(tab);
	printf("%d\n",charnum );
}
