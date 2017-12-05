/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jagarcia <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/07 11:03:16 by jagarcia          #+#    #+#             */
/*   Updated: 2017/11/08 04:15:47 by jagarcia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

int		ft_strcmp(char *s1, char *s2)
{
	int j;

	j = 0;
	while (s1[j])
	{
		if (s1[j] == s2[j])
			j++;
		else
			return (s1[j] - s2[j]);
	}
	return (0);
}

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

void	ft_swap(char **a, char **b)
{
	char *bubble;

	bubble = *a;
	*a = *b;
	*b = bubble;
}

int		main(int argn, char **argv)
{
	int		i;
	int		j;
	char	**str;

	str = argv;
	j = 1;
	while (j < argn)
	{
		i = j + 1;
		while (i < argn)
		{
			if (ft_strcmp(str[j], str[i]) > 0)
				ft_swap(&str[j], &str[i]);
			i++;
		}
		j++;
	}
	i = 1;
	while (i < argn)
	{
		ft_putstr(str[i]);
		i++;
	}
}
