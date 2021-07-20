/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sstoll-c <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/18 12:13:37 by sstoll-c          #+#    #+#             */
/*   Updated: 2021/07/19 22:02:28 by sstoll-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	i;
	int	r;

	i = 1;
	r = 1;
	while (nb < 0)
		return (0);
	while (nb == 1)
		return (1);
	while (i <= nb)
	{
		r = i * r;
		i++;
	}
	return (r);
}
