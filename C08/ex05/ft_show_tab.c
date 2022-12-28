/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_show_tab.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yukisato <yukisato@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/20 19:12:09 by yukisato          #+#    #+#             */
/*   Updated: 2022/12/22 17:12:56 by yukisato         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <unistd.h>
#include <stdio.h>

void	ft_putchar(int k)
{
	char	z;

	z = k + '0';
	write(1, &z, 1);
}

void	ft_putnbr(int nb)
{
	if (nb == -2147483648)
		write(1, "-2147483648", 11);
	else if (nb >= 10)
	{
		ft_putnbr(nb / 10);
		ft_putnbr(nb % 10);
	}
	else if (nb < 0 && nb >= -2147483647)
	{
		write(1, "-", 1);
		ft_putnbr(-nb);
	}
	else
		ft_putchar(nb);
}

void ft_show_tab(struct s_stock_str *par)
{
	int	i;

	i = 0;
	while (par[i])
		ft_putnbr(par[i].size);
	while (par[i])
		ft_putchar(par[i].str);
	while (par[i])
		ft_putchar(par[i].copy);
}