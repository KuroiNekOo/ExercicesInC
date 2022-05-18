/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pow_rec_main.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgatopreto <maximegomes.dinis@outlook.fr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/17 02:48:28 by lgatopreto        #+#    #+#             */
/*   Updated: 2022/05/18 18:55:21 by lgatopreto       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

long	ft_pow(const int nb, const unsigned int pow)
{
	if (pow == 0 || nb == 1)
		return (1);
	return (nb * ft_pow(nb, pow - 1));
}

int	main(int ac, char **av)
{
	if (ac > 2)
		printf("%ld\n", ft_pow(atoi(av[1]), atoi(av[2])));
	return (EXIT_SUCCESS);
}
