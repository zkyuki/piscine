/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yukisato <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/11 15:07:48 by yukisato          #+#    #+#             */
/*   Updated: 2022/12/12 17:29:03 by yukisato         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_uppercase(char *str)
{
	int	k;

	k = 0;
	while (str[k] >= 'A' && str[k] <= 'Z')
	{
		k++;
	}
	if (str[k] == '\0')
		return (1);
	else
		return (0);
}
