/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00_v2.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: efournie <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/03 15:15:00 by efournie          #+#    #+#             */
/*   Updated: 2021/07/04 20:33:25 by ajung            ###   ########.fr       */
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
	ft_putchar('o');
	while (i < x - 1)
	{
		ft_putchar('-');
		i++;
	}
	if (x > 1)
	{
		ft_putchar('o');
	}
	ft_putchar('\n');
}

void	print_between(int x)
{
	int	j;

	j = 1;
	ft_putchar('|');
	if (x == 1)
		ft_putchar('\n');
	while (j < x - 1)
	{
		ft_putchar(' ');
		j++;
	}
	if (x > 1)
	{
		ft_putchar('|');
		ft_putchar('\n');
	}
}
