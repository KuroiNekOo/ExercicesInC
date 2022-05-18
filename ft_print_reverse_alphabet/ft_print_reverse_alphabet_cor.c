/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgatopreto <maximegomes.dinis@outlook.fr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/08 22:33:30 by lgatopreto        #+#    #+#             */
/*   Updated: 2022/05/08 22:33:38 by lgatopreto       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

#define FIRST_LETTER 'a'
#define LAST_LETTER 'z'

void	ft_putchar(char c)
{
	write(STDOUT_FILENO, &c, sizeof(c));
}

void	ft_print_reverse_alphabet(void)
{
	int	letter;

	letter = LAST_LETTER;
	while (letter >= FIRST_LETTER)
	{
		ft_putchar(letter);
		letter--;
	}
}
