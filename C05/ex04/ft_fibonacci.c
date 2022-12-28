/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yukisato <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/15 17:21:41 by yukisato          #+#    #+#             */
/*   Updated: 2022/12/15 21:20:22 by yukisato         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_fibonacci(int index)
{
	if (index >= 0)
	{
		if (index > 1)
			index = ft_fibonacci(index - 1) + ft_fibonacci (index -2);
		return (index);
	}
	else
		return (-1);
}
