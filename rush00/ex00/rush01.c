/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: efournie <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/04 11:53:44 by efournie          #+#    #+#             */
/*   Updated: 2021/07/04 20:34:43 by ajung            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

void	print_first(int x);

void	print_between(int x);

void	print_last(int x);

void	rush(int x, int y)
{
	int	k;

	if (x < 1 || y < 1)
		return ;
	k = 0;
	print_first(x);
	while (k < (y - 2))
	{
		print_between(x);
		k++;
	}
	if (y > 1)
		print_last(x);
}

void	print_first(int x)
{
	int	i;

	i = 1;
	ft_putchar('/');
	while (i < x - 1)
	{
		ft_putchar('*');
		i++;
	}
	if (x > 1)
	{
		ft_putchar('\\');
	}
	ft_putchar('\n');
}

void	print_between(int x)
{
	int	j;

	j = 1;
	ft_putchar('*');
	if (x == 1)
		ft_putchar('\n');
	while (j < x - 1)
	{
		ft_putchar(' ');
		j++;
	}
	if (x > 1)
	{
		ft_putchar('*');
		ft_putchar('\n');
	}
}

void	print_last(int x)
{
	int	i;

	i = 1;
	ft_putchar('\\');
	while (i < x - 1)
	{
		ft_putchar('*');
		i++;
	}
	if (x > 1)
	{
		ft_putchar('/');
	}
	ft_putchar('\n');
}
