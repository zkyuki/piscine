/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yukisato <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/14 17:05:28 by yukisato          #+#    #+#             */
/*   Updated: 2022/12/16 21:48:07 by yukisato         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	k;
	int	answer;

	k = 0;
	answer = 1;
	while (k < nb)
	{
		answer = answer * (nb - k);
		k++;
	}
	if (k == nb)
		return (answer);
	else
		return (0);
}
