#include <stdio.h>

char	*ft_strrev(char *str)
{
	int	lon;
	int	i;
	char	tmp;

	lon = 0;
	i = 0;
	while (str[lon])
		lon++;
	lon -= 1;
	while (i < lon)
	{
		tmp = str[i];
		str[i] = str[lon];
		str[lon] = tmp;
		i++;
		lon--;
	}
	// str[i] = '\0';
	return (str);
}
int	main(void)
{
	char s[] = "Hello World";
	ft_strrev(s);
	printf("%s\n", s);
	return (0);
}
