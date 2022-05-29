/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_feynman_squares.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgatopreto <maximegomes.dinis@outlook.fr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/29 17:48:24 by lgatopreto        #+#    #+#             */
/*   Updated: 2022/05/29 18:05:06 by romannbroque     ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

unsigned long	feynman_squares(unsigned int n)
{
	return ((n * (n + 1) * (2 * n + 1)) / 6);
}

int	main(int ac, char **av)
{
	if (ac > 1)
		printf("%lu\n", feynman_squares(atoi(av[1])));
	return (EXIT_SUCCESS);
}
