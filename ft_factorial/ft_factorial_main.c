/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_factorial_main.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgatopreto <maximegomes.dinis@outlook.fr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/10 19:00:26 by lgatopreto        #+#    #+#             */
/*   Updated: 2022/06/10 19:02:57 by lgatopreto       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

unsigned long	ft_factorial(unsigned long n)
{
	if (n == 0 || n == 1)
		return (1);
	return (n * fact(n - 1));
}

int	main(int ac, char *av[])
{
	if (ac > 1)
		printf("fact result: %lu\n", fact(atoi(av[1])));
	return (EXIT_SUCCESS);
}
