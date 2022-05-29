/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pow_rec_main.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgatopreto <maximegomes.dinis@outlook.fr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/17 02:48:28 by lgatopreto        #+#    #+#             */
/*   Updated: 2022/05/18 15:21:21 by lgatopreto       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#include <limits.h>

long	ft_pow(const int nb, const unsigned int pow)
{
	//long	result;

	//result = nb;
	//return (result *= nb * (pow - 1)));
	return (ft_pow(nb * nb  * (pow - 1));
}

int	main(int ac, char **av)
{
	if (ac > 2)
		printf("%lu\n", ft_pow(atoi(av[1]), atoi(av[2])));
	//printf("RESULT: %ld\n", ft_pow(2, 3));
	return (EXIT_SUCCESS);
}
