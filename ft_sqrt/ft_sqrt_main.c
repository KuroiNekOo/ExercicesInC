/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt_main.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgatopreto <maximegomes.dinis@outlook.fr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/21 12:06:30 by lgatopreto        #+#    #+#             */
/*   Updated: 2022/06/21 13:22:53 by lgatopreto       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int	ft_sqrt(int nb)
{
	int	i;

	i = 0;
	if (nb <= 0)
		return (0);
	while (i*i != nb)
	{
		++i;
		if (i > nb)
			return (0);
	}
	return (i);
}

int main(int ac, char **av)
{
	if (ac > 1)
		printf("Result: %u\n", ft_sqrt(atoi(av[1])));
	return (EXIT_SUCCESS);
}
