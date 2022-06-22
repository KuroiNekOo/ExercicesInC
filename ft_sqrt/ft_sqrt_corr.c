/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt_corr.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgatopreto <maximegomes.dinis@outlook.fr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/21 12:06:30 by lgatopreto        #+#    #+#             */
/*   Updated: 2022/06/22 11:59:11 by romannbroque     ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	ft_sqrt(int nb)
{
	int	sqrt;
	int	res;

	sqrt = 0;
	res = sqrt * sqrt;
	if (nb <= 0)
		return (0);
	while (res <= nb)
	{
		if (res == nb)
			return (sqrt);
		++sqrt;
		res = sqrt * sqrt;
	}
	return (0);
}

int	main(int ac, char **av)
{
	int	nb;

	if (ac > 1)
	{
		nb = atoi(av[1]);
		printf("%d --> %d\n", nb, ft_sqrt(nb));
	}
	return (EXIT_SUCCESS);
}
