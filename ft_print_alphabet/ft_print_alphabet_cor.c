/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   exo00.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgatopreto <maximegomes.dinis@outlook.fr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/08 18:58:58 by lgatopreto        #+#    #+#             */
/*   Updated: 2022/05/08 22:03:21 by romannbroque     ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

#define FIRST_LETTER 'a'
#define LAST_LETTER 'z'

void	ft_putchar(char c)
{
	write(STDOUT_FILENO, &c, sizeof(c));
}

void	ft_print_alphabet(void)
{
	int		letter;

	letter = FIRST_LETTER;
	while (letter <= LAST_LETTER)
	{
		ft_putchar(letter);
		letter++;
	}
}
