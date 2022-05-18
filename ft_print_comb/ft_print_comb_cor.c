/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb_romann.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: romannbroque <rbroque@student.42.fr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/10 12:11:21 by romannbroque      #+#    #+#             */
/*   Updated: 2022/05/10 21:56:14 by romannbroque     ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "unistd.h"
#include "stdlib.h"

#define MIN '0'
#define MAX '9'
#define SEPARATOR ','
#define SPACE ' '

static void	ft_putchar(const char c)
{
	write(STDOUT_FILENO, &c, sizeof(char));
}

static void	display_comb(const char *array, const size_t size)
{
	size_t	i;

	i = 0;
	while (i < size)
	{
		ft_putchar(array[i]);
		++i;
	}
	if (array[0] < MAX - 2 || array[1] < MAX - 1 || array[2] < MAX)
	{
		ft_putchar(SEPARATOR);
		ft_putchar(SPACE);
	}
}

void	ft_print_comb(void)
{
	char	nb[3];

	nb[0] = MIN;
	nb[1] = MIN;
	nb[2] = MIN;
	while (nb[0] <= MAX)
	{
		nb[1] = nb[0] + 1;
		while (nb[1] <= MAX)
		{
			nb[2] = nb[1] + 1;
			while (nb[2] <= MAX)
			{
				display_comb(nb, 3);
				++nb[2];
			}
			++nb[1];
		}
		++nb[0];
	}
}

int	main(void)
{
	ft_print_comb();
	return (EXIT_SUCCESS);
}
