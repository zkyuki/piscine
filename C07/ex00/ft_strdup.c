/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yukisato <yukisato@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/16 22:25:04 by yukisato          #+#    #+#             */
/*   Updated: 2022/12/20 18:59:01 by yukisato         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

char	*ft_strdup(char *src)
{
	int		count;
	char	*temp;
	int		k;

	count = 0;
	while (src[count])
		count++;
	temp = malloc(sizeof(char) * (count + 1));
	if (!temp)
		return (0);
	k = -1;
	while (k++ < count)
		temp[k] = src[k];
	temp[k] = '\0';
	return (temp);
}
