/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jagarcia <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/06 22:25:24 by jagarcia          #+#    #+#             */
/*   Updated: 2017/11/08 03:44:12 by jagarcia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int fact;

	fact = 1;
	if (nb == 0)
		return (1);
	if (nb >= 13 || nb <= 0)
		return (0);
	while (nb > 0)
	{
		fact = fact * nb;
		nb--;
	}
	return (fact);
}
