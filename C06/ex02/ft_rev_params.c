/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yukisato <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/16 22:18:59 by yukisato          #+#    #+#             */
/*   Updated: 2022/12/16 22:20:23 by yukisato         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char **argv)
{
	int	k;
	int	l;

	k = 0;
	l = argc - 1;
	while (l > 0)
	{
		while (argv[l][k] != '\0')
		{
			write(1, &argv[l][k], 1);
			k++;
		}
		k = 0;
		write(1, "\n", 1);
		l--;
	}
	return (0);
}
