/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yukisato <yukisato@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/18 18:21:15 by yukisato          #+#    #+#             */
/*   Updated: 2022/12/20 18:59:05 by yukisato         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	i;
	int	copy_min;

	if (min >= max)
	{
		range = malloc(sizeof(int) * 1);
		range = malloc(sizeof(int) * 1);
		return (0);
	}
	range[0] = malloc(sizeof(int) * (max - min));
	if (!range)
		return (-1);
	i = 0;
	copy_min = min;
	while (i < max - copy_min)
	{
		range[0][i] = min;
		i++;
		min++;
	}
	return (i);
}
