/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dec_to_bin_main.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgatopreto <maximegomes.dinis@outlook.fr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/18 23:50:38 by lgatopreto        #+#    #+#             */
/*   Updated: 2022/06/13 19:17:12 by lgatopreto       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>

#define ZERO '0'
#define NINE '9'
#define FIRST_WHITESPACE 9
#define LAST_WHITESPACE 13
#define SPACE ' '
#define ASCII_OFFSET 48

unsigned long	ft_atoi(char *nb)
{
	unsigned long	result;

	result = 0;
	while (nb != NULL && (*nb == SPACE || 
		(*nb >= FIRST_WHITESPACE && *nb <= LAST_WHITESPACE)))
		++nb;
	if (*nb == '+')
		++nb;
	if (*nb == '\0' || *nb == '-')
		return (0);
	while (*nb >= ZERO && *nb <= NINE)
	{
		result = result * 10 + (*nb - ASCII_OFFSET);
		ft_atoi(++nb);
	}
	return(result);
}

size_t	get_bin_size(unsigned long result)
{
	if (result != 0)
	{
		result /= 2;
		return (1 + get_bin_size(result));
	}
	return (0);
}

void	calcul(char *res, unsigned long result, size_t size)
{
	while (size > 0)
	{
		--size;
		res[size] = result % 2 + ASCII_OFFSET;
		result /= 2;
	}
}

char	*ft_dec_to_bin(char *nb)
{
	char	*res;

	res = malloc(get_bin_size(ft_atoi(nb)) * sizeof(char));
	calcul(res, ft_atoi(nb), get_bin_size(ft_atoi(nb)));
	return (res);
}

int	main(int ac, char **av)
{
	if (ac > 1)
		printf("%lu ---> %s", ft_atoi(av[1]), ft_dec_to_bin(av[1]));
	return (EXIT_SUCCESS);
}
