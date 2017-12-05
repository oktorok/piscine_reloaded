/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jagarcia <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/07 11:55:57 by jagarcia          #+#    #+#             */
/*   Updated: 2017/11/08 06:19:44 by jagarcia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strdup(char *src)
{
	char	*str1;
	int		len;
	int		i;

	len = 0;
	while (src[len])
		len++;
	str1 = (char *)malloc(sizeof(*str1) * len);
	if (str1 == NULL)
		return (NULL);
	i = 0;
	while (i < len)
	{
		str1[i] = src[i];
		i++;
	}
	str1[len] = '\0';
	return (str1);
}
