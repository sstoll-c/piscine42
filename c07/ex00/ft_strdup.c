/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sstoll-c <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/21 11:44:59 by sstoll-c          #+#    #+#             */
/*   Updated: 2021/07/21 14:13:25 by sstoll-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(char *src)
{
	int	i;

	i = 0;
	while (src[i])
		i++;
	return (i);
}

char	*ft_strdup(char *src)
{
	char	*dest;
	int	i;

	i = 0;
	dest = malloc(sizeof(char) * ft_strlen(src) + 1);
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;	
	}
	dest[i] = 0;
	return (dest);
}
int main(void)
{
	char *s = "hello world";
	char *p = ft_strdup(s);
	printf("%s\n", p);
	return (0);
}
