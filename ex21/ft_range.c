/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fdubois <fdubois@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/04 17:37:49 by fdubois           #+#    #+#             */
/*   Updated: 2018/11/04 17:51:02 by fdubois          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	if (min >= max)
		return (NULL);
	int	*tab;
	int	i;

	i = 0;
	if (!(tab = (int*)malloc(sizeof(int) * (max - min))))
		return (NULL);
	while (min < max)
	{
		tab[i++] = min;
		min++;
	}
	return (tab);
}
