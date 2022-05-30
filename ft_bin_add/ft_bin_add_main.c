/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bin_add_main.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgatopreto <maximegomes.dinis@outlook.fr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/18 19:00:48 by lgatopreto        #+#    #+#             */
/*   Updated: 2022/05/30 22:19:43 by lgatopreto       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>

#define ASCII_OFFSET 48

void	binary_add(unsigned int a, unsigned int b, char *binary)
{
	long nbr;
	int i;

	nbr = a + b;
	i = 0;

	// Convertion dec in bin
	while (nbr > 0)
	{
		*binary = nbr%2 + ASCII_OFFSET;
		nbr = nbr/2;
		binary++;
		i++;
	}

	// Affichage
	i = i - 1;
	while (i >= 0)
	{
		binary--;
		write(STDOUT_FILENO, binary, sizeof(char));
		i--;
	}
}

int	main(int ac, char **av)
{
	char	*str[100];

	if (ac == 3)
		binary_add(atoi(av[1]), atoi(av[2]), *str);
	return (EXIT_SUCCESS);
}
