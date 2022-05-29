/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   exo00.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgatopreto <maximegomes.dinis@outlook.fr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/08 18:58:58 by lgatopreto        #+#    #+#             */
/*   Updated: 2022/05/08 21:56:28 by lgatopreto       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>

void	ft_putchar(char c)
{
	write(STDOUT_FILENO, &c, sizeof(c));
}

void	ft_print_alphabet(void)
{
	int		i;

	i = 97;
	while (i >= 97 && i <= 122)
	{
		ft_putchar(i);
		i++;
	}
	ft_putchar('\n');
}
