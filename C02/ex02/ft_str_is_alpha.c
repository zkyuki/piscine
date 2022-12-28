/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yukisato <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/09 01:00:37 by yukisato          #+#    #+#             */
/*   Updated: 2022/12/12 17:25:24 by yukisato         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

int	ft_str_is_alpha(char *str)
{
	int	k;

	k = 0;
	while ((str[k] >= 'A' && str[k] <= 'Z') || (str[k] >= 'a' && str[k] <= 'z'))
	{
		k++;
	}
	if (str[k] == '\0')
		return (1);
	else
		return (0);
}
