/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yukisato <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/06 23:17:48 by yukisato          #+#    #+#             */
/*   Updated: 2022/12/07 17:46:17 by yukisato         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

void	ft_devide(int x, int y)
{
	char	p;
	char	q;
	char	r;
	char	s;

	p = x / 10 + '0';
	q = x % 10 + '0';
	r = y / 10 + '0';
	s = y % 10 + '0';
	write (1, &p, 1);
	write (1, &q, 1);
	write (1, " ", 1);
	write (1, &r, 1);
	write (1, &s, 1);
	if (!(p == '9' && q == '8' && r == '9' && s == '9'))
		write (1, ", ", 2);
}

void	ft_print_comb2(void)
{
	int	x;
	int	y;

	x = -1;
	y = 0;
	while (x++ < 98)
	{
		while (y++ < 99)
		{
			ft_devide(x, y);
		}
		y = x + 1;
	}
}
