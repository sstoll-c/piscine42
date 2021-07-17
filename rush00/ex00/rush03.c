/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush03.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: efournie <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/04 10:56:21 by efournie          #+#    #+#             */
/*   Updated: 2021/07/04 20:35:15 by ajung            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

void	print_firstlast(int x);

void	print_between(int x);

void	rush(int x, int y)
{
	int	k;

	if (x < 1 || y < 1)
		return ;
	k = 0;
	print_firstlast(x);
	while (k < (y - 2))
	{
		print_between(x);
		k++;
	}
	if (y > 1)
		print_firstlast(x);
}

void	print_firstlast(int x)
{
	int	i;

	i = 1;
	ft_putchar('A');
	while (i < x - 1)
	{
		ft_putchar('B');
		i++;
	}
	if (x > 1)
	{
		ft_putchar('C');
	}
	ft_putchar('\n');
}

void	print_between(int x)
{
	int	j;

	j = 1;
	ft_putchar('B');
	if (x == 1)
		ft_putchar('\n');
	while (j < x - 1)
	{
		ft_putchar(' ');
		j++;
	}
	if (x > 1)
	{
		ft_putchar('B');
		ft_putchar('\n');
	}
}
