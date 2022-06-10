/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_factorial_main.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgatopreto <maximegomes.dinis@outlook.fr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/10 19:00:26 by lgatopreto        #+#    #+#             */
/*   Updated: 2022/06/10 19:06:44 by lgatopreto       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

unsigned long	ft_factorial(unsigned long nb)
{
	if (nb == 0 || nb == 1)
		return (1);
	return (nb * ft_factorial(nb - 1));
}

int	main(int ac, char *av[])
{
	if (ac > 1)
		printf("%lu\n", ft_factorial(atoi(av[1])));
	return (EXIT_SUCCESS);
}
