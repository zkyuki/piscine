/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yukisato <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/13 16:06:12 by yukisato          #+#    #+#             */
/*   Updated: 2022/12/13 16:48:40 by yukisato         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	int				k;
	unsigned int	z;

	k = 0;
	z = 0;
	while (dest[k] != '\0')
		k++;
	while (src[z] != '\0' && z < nb)
	{
		dest[k] = src[z];
		k++;
		z++;
	}
	dest[k] = '\0';
	return (dest);
}
