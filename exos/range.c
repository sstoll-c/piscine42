#include <stdlib.h>
int		*ft_range(int min, int max)
{
	int *tab;
	int i;

	if (min >= max)
		return (NULL);
	tab = malloc(sizeof(*tab) * (max - min));
	i = 0;
	while (min < max)
	{
		tab[i] = min;
		i++;
		min++;
	}
	return (tab);
}

int		main(void)
{
	int		i;
	int		*tab;

 	tab = ft_range(52, 59);
	i = 0;
	while (i < 7)
	{		printf("%d\n", tab[i]);
     	i++;
     }
}
