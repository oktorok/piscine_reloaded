/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jagarcia <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/07 12:21:25 by jagarcia          #+#    #+#             */
/*   Updated: 2017/11/07 12:32:54 by jagarcia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		*ft_range(int min, int max)
{
	int *array;
	int i;
	int bubble;

	if (min >= max)
		return (NULL);
	array = (int *)malloc(sizeof(int) * (max - min));
	if (array == NULL)
		return (NULL);
	i = 0;
	bubble = min;
	while (i < max - min)
	{
		array[i] = bubble;
		bubble++;
		i++;
	}
	return (array);
}
