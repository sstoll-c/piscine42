/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sstoll-c <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/21 14:52:45 by sstoll-c          #+#    #+#             */
/*   Updated: 2021/07/21 15:06:08 by sstoll-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_ultimate_range(int **rangw, int min, int max)
{
	int	i;
	int *range;
	if (min >= max)
	{
		range[0] = NULL;
		return (0);
	}
	range[0] = malloc(sizeof(int) * (max - min));
	if (range[0] == NULL)
		return (-1);
	while (min < max)
	{
		range[0][i] = min;
		i++;
		min++;
	}
	return (range);
}
