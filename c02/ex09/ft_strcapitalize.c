/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sstoll-c <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/12 20:03:48 by sstoll-c          #+#    #+#             */
/*   Updated: 2021/07/19 12:16:23 by sstoll-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strlowcase(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
		{
			str[i] = str[i] + 32;
		}
		i++;
	}
	return (str);
}
char	ft_strcapitalize(char *str)
{
	int		i;
	int		chat;

	i = 0;
	chat = 1;
	str = ft_strlowcase(str);
	while (str[i] != '\0')
	{
		if ((str[i] >= 'a' && str[i] <= 'z') && chat == 1)
		{	
			str[i] = str[i] - 32;
			chat = 0;
		}
		else if ((str[i] >= 'a' && str[i] <= 'z') 
			|| (str[i] >= '0' && str[i] <= '9'))
			chat = 0;
		else
			chat = 1;
		i++;
	}
	return (*str);
}

int		main()
{
	char str[] = "salut, comment tu vas ? 42mots quarante-deux; cinquante+et+un";
	
	ft_strcapitalize(str);
	printf("%s", str);
}
