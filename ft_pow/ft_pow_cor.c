/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pow_cor.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgatopreto <maximegomes.dinis@outlook.fr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/17 02:48:28 by lgatopreto        #+#    #+#             */
/*   Updated: 2022/05/18 22:23:47 by lgatopreto       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

long	ft_pow(const int nb, const unsigned int pow)
{
	long			result;
	unsigned int	i;
	long			tmp;

	result = 0;
	i = 0;
	tmp = nb;
	while (i < pow - 1)
	{
		tmp = tmp * nb;
		result = tmp;
		i++;
	}
	return (result);
}

int	main(int ac, char **av)
{
	if (ac > 2)
		printf("%ld\n", ft_pow(atoi(av[1]), atoi(av[2])));
	return (EXIT_SUCCESS);
}
