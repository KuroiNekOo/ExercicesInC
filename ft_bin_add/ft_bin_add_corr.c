/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bin_add.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgatopreto <maximegomes.dinis@outlook.fr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/30 22:19:58 by lgatopreto        #+#    #+#             */
/*   Updated: 2022/05/30 22:51:34 by romannbroque     ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

#define ASCII_OFFSET 48

size_t	get_bin_size(unsigned long nb)
{
	size_t	size;

	if (nb == 0)
		return (1);
	size = 0;
	while (nb != 0)
	{
		nb /= 2;
		++size;
	}
	return (size);
}

void	binary_add(unsigned int a, unsigned int b, char *binary)
{
	long	nbr;
	size_t	i;

	nbr = a + b;
	i = get_bin_size(nbr);
	binary[i] = '\0';
	while (i > 0)
	{
		--i;
		binary[i] = nbr % 2 + ASCII_OFFSET;
		nbr /= 2;
	}
}

int	main(int ac, char **av)
{
	char			binary[100];
	unsigned int	nb1;
	unsigned int	nb2;

	if (ac > 2)
	{
		nb1 = atoi(av[1]);
		nb2 = atoi(av[2]);
		binary_add(nb1, nb2, binary);
		printf("%u + %u --> %s", nb1, nb2, binary);
	}
	return (EXIT_SUCCESS);
}
