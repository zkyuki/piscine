/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yukisato <yukisato@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/19 23:28:16 by yukisato          #+#    #+#             */
/*   Updated: 2022/12/21 20:40:16 by yukisato         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stock_str.h"
#include <stdlib.h>

void	ft_show_tab(struct s_stock_str *par);

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

int	ft_strlen(char *str)
{
	int	len;

	len = 0;
	while (str[len] != '\0')
	{
		len++;
	}
	return (len);
}

struct s_stock_str	*put_all(struct s_stock_str *answer, int ac, char **av)
{
	int	i;

	i = 0;
	while (i < ac)
	{
		answer[i].size = ft_strlen(av[i]);
		answer[i].str = av[i];
		answer[i].copy = ft_strdup(av[i]);
		i++;
	}
	answer[i].str = 0;
	return (answer);
}

struct s_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	struct s_stock_str	*answer;

	answer = malloc(sizeof(struct s_stock_str) * (ac + 1));
	if (!answer)
		return (NULL);
	return (put_all(answer, ac, av));
}
