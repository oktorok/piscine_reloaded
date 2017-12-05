/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jagarcia <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/07 10:45:30 by jagarcia          #+#    #+#             */
/*   Updated: 2017/11/08 03:51:57 by jagarcia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_putstr(char *str1)
{
	char *str;

	str = str1;
	while (*str)
	{
		ft_putchar(*str);
		str++;
	}
	ft_putchar('\n');
}

int		main(int argn, char **argv)
{
	int i;

	i = 1;
	while (i < argn)
	{
		ft_putstr(argv[i]);
		i++;
	}
	return (0);
}
