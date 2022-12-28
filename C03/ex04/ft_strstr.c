/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yukisato <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/13 16:08:12 by yukisato          #+#    #+#             */
/*   Updated: 2022/12/17 22:51:20 by yukisato         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int		z;
	char	target;

	if (!to_find)
		return (str);
	target = *to_find;
	z = 0;
	while (*str != '\0')
	{
		if (*str == target)
		{
			while (to_find[z] != '\0')
			{
				if (to_find[z] != str[z])
					break ;
				else if (to_find[z + 1] == '\0')
					return (str);
				z++;
			}
		}
		str++;
	}
	return (0);
}
