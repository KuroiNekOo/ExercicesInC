/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dec_to_bin_corr.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgatopreto <maximegomes.dinis@outlook.fr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/18 23:50:38 by lgatopreto        #+#    #+#             */
/*   Updated: 2022/06/22 11:42:36 by romannbroque     ###   ########.fr       */
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
#define ZERO_BIN "0"

unsigned long	ft_atoi(const char *nb)
{
	unsigned long	result;

	result = 0;
	while (nb != NULL && (*nb == SPACE
			|| (*nb >= FIRST_WHITESPACE && *nb <= LAST_WHITESPACE)))
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
	return (result);
}

size_t	get_bin_size(unsigned long result)
{
	if (result != 0)
		return (1 + get_bin_size(result /= 2));
	return (0);
}

void	fill_bin(char *bin_nb, unsigned long result, size_t bin_size)
{
	while (bin_size > 0)
	{
		--bin_size;
		bin_nb[bin_size] = result % 2 + ASCII_OFFSET;
		result /= 2;
	}
}

char	*ft_dec_to_bin(char *nb)
{
	char				*bin_nb;
	const unsigned long	number = ft_atoi(nb);
	const size_t		bin_size = get_bin_size(number);

	if (number == 0)
		return (ZERO_BIN);
	bin_nb = malloc((bin_size + 1) * sizeof(char));
	if (bin_nb != NULL)
	{
		fill_bin(bin_nb, number, bin_size);
		bin_nb[bin_size] = '\0';
	}
	return (bin_nb);
}

int	main(int ac, char **av)
{
	if (ac > 1)
		printf("%s\n", ft_dec_to_bin(av[1]));
	return (EXIT_SUCCESS);
}
