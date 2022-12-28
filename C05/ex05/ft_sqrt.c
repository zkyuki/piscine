/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yukisato <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/15 17:40:14 by yukisato          #+#    #+#             */
/*   Updated: 2022/12/16 19:15:58 by yukisato         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	int	min;
	int	max;
	int	ave;

	max = nb;
	min = 0;
	if (nb <= 0)
		return (0);
	if (nb == 1)
		return (1);
	while (max - min != 1)
	{
		ave = (max + min) / 2;
		if (nb / ave == ave && (nb % ave + nb / ave) == ave)
			return (ave);
		else if (nb / ave == ave)
			return (0);
		else if (nb / ave < ave)
			max = ave;
		else if (nb / ave > ave)
			min = ave;
	}
	return (0);
}
