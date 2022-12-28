/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yukisato <yukisato@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/17 17:56:35 by yukisato          #+#    #+#             */
/*   Updated: 2022/12/20 18:59:03 by yukisato         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*temp;
	int	i;
	int	copy_min;

	if (min >= max)
		return (0);
	temp = malloc(sizeof(int) * (max - min));
	if (!temp)
		return (0);
	i = 0;
	copy_min = min;
	while (i < max - copy_min)
	{
		temp[i] = min;
		i++;
		min++;
	}
	return (temp);
}
