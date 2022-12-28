/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yukisato <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/08 17:14:47 by yukisato          #+#    #+#             */
/*   Updated: 2022/12/09 19:55:28 by yukisato         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

void    ft_rev_int_tab(int *tab, int size)
{
	int	k;
	int	z;
	int	b[k];

	z = 0;
	k = size + 1;
	b[size] = '\0';
	while (size-- > 0)
	{
		b[z] = tab[size];
		z++;
	}
}

int main(void)
{
	int a[] = {23, 33, 55};
	int size = 3;
	int	i = 0;

	ft_rev_int_tab(a, size);
	while (a[i] != '\0')
		printf("%d", a[i]);
}
