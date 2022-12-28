/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yukisato <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/14 19:36:39 by yukisato          #+#    #+#             */
/*   Updated: 2022/12/15 21:21:31 by yukisato         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int	temp;

	if (power > 0)
	{
		temp = nb;
		while (power != 1)
		{
			nb *= temp;
			power--;
		}
		return (nb);
	}
	else if (power == 0)
		return (1);
	else
		return (0);
}
