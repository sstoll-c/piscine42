#include <stdlib.h>

int	is_in_charset(char n, char *charset)
{
	int	i;

	i = 0;
	while (charset[i])
	{
		if (charset[i] == n)
			return (1);
		i++;
	}
	return (0);
}

int	word_count(char *str, char *charset)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (str[i])
	{
		if (is_in_charset(str[i], charset) == 0 && str[i])
		{
			count++;
			while (is_in_charset(str[i], charset) == 0 && str[i])
				i++;
		}
		else
			i++;
	}
	return (count);
}

char	*ft_cut(int *i, char *str, int size)
{
	int		k;
	char	*tab;

	tab = malloc(sizeof(char) * (size + 1));
	if (!tab)
		return (NULL);
	k = 0;
	while (k < size)
	{
		tab[k] = str[*i];
		k++;
		*i = *i + 1;
	}
	tab[size] = '\0';
	return (tab);
}

char	**ft_split(char *str, char *charset)
{
	int		i;
	int		j;
	int		l;
	char	**result;

	i = 0;
	l = 0;
	result = malloc(sizeof(char *) * (word_count(str, charset) + 1));
	if (!result)
		return (NULL);
	result[word_count(str, charset)] = NULL;
	while (str[i])
	{
		if (is_in_charset(str[i], charset) == 0 && str[i])
		{
			j = i;
			while (is_in_charset(str[i], charset) == 0 && str[i])
				j++;
			result[l] = ft_cut(&i, str, j - i);
			l++;
		}
		else
			i++;
	}
	return (result);
}


#include <stdio.h>
int main(int argc, char **argv)
{
    (void)argc;
    char **res = ft_split(argv[1], argv[2]);
    int i = 0;
    while (res[i])
    {
        printf("t[%d] = %s\n", i, res[i]);
        i++;
    }
    printf("%s",res[i]);
}
