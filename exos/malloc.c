#include <stdio.h>
#include <stdlib.h>

int main (int argc, char *argv[])
{
	char *tab;
	int i;

	i = 0;
	if ( argc == 1)
		return (0);
	while ( argv[1][i])
		i++;
	

	tab = malloc(sizeof(char) * i + 1);
	
	i = 0;
	while (argv[1][i])
	{	
		tab[i] = argv[1][i];
		i++;
	}
	tab[i] = 0;
	puts(argv[1]);
	puts(tab);
}
