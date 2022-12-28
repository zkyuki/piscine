/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yukisato <yukisato@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/19 14:08:08 by yukisato          #+#    #+#             */
/*   Updated: 2022/12/20 18:59:07 by yukisato         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	count_all(int size, char **strs, char *sep)
{
	int	_count;
	int	i;
	int	j;
	int	k;

	_count = 0;
	i = 0;
	j = 0;
	while (i < size)
	{
		while (strs[i][j])
		{
			_count++;
			j++;
		}
		j = 0;
		i++;
	}
	k = 0;
	while (sep[k])
		k++;
	_count += (size - 1) * k;
	return (_count);
}

char	*put_all(int size, char **strs, char *sep, char *merge)
{
	int	i;
	int	j;
	int	k;
	int	z;

	i = -1;
	z = -1;
	while (++i < size)
	{
		j = -1;
		while (strs[i][++j])
			merge[++z] = strs[i][j];
		if (!(i == size - 1))
		{
			k = -1;
			while (sep[++k])
				merge[++z] = sep[k];
		}
	}
	return (merge);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*merge;

	if (size == 0)
	{
		merge = malloc(sizeof(char));
		if (!merge)
			return (NULL);
		return (merge);
	}
	merge = malloc(sizeof(char) * count_all(size, strs, sep));
	if (!merge)
		return (NULL);
	return (put_all(size, strs, sep, merge));
}
