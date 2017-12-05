/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_display_file.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jagarcia <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/08 01:21:23 by jagarcia          #+#    #+#             */
/*   Updated: 2017/11/08 03:58:16 by jagarcia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

int	errors(int a)
{
	if (a == 1)
	{
		ft_putstr("File name missing.\n");
		return (0);
	}
	else if (a > 2)
	{
		ft_putstr("Too many arguments.\n");
		return (0);
	}
	return (1);
}

int	main(int argn, char **argv)
{
	int		descriptor;
	char	storage[10];
	int		cheker;

	if (errors(argn) == 0)
		return (0);
	descriptor = open(argv[1], O_RDONLY);
	if (descriptor < 0)
	{
		ft_putstr("Error opening file\n");
		return (0);
	}
	cheker = 1;
	while (cheker > 0)
	{
		cheker = read(descriptor, storage, sizeof(storage) - 1);
		write(1, storage, cheker);
	}
	cheker = close(descriptor);
	if (cheker < 0)
	{
		ft_putstr("Error closing file\n");
		return (0);
	}
	return (0);
}
