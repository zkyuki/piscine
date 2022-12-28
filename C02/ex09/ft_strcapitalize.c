/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yukisato <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/11 20:28:22 by yukisato          #+#    #+#             */
/*   Updated: 2022/12/13 14:53:41 by yukisato         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcapitalize(char *str)
{
	int	k;
	int	i;
	int	z;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
			str[i] = str[i] + ('a' - 'A');
		i++;
	}
	k = 0;
	z = k - 1;
	while (str[k] != '\0')
	{
		if (str[k] >= 'a' && str[k] <= 'z')
			if (((!(str[z] >= '0' && str[z] <= '9'))
					&& (!(str[z] >= 'A' && str[z] <= 'Z'))
					&& (!(str[z] >= 'a' && str[z] <= 'z'))) || (k == 0))
				str[k] = str[k] - ('a' - 'A');
		k++;
		z++;
	}
	return (str);
}
