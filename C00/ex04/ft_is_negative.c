/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yukisato <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/06 11:48:44 by yukisato          #+#    #+#             */
/*   Updated: 2022/12/06 11:59:33 by yukisato         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

void	ft_is_negative(int n)
{
	char	c;
	char	d;

	c = 'N';
	d = 'P';
	if (n < 0)
	{
		write(1, &c, 1);
	}
	else
	{
		write(1, &d, 1);
	}
}
