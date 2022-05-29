/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgatopreto <maximegomes.dinis@outlook.fr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/10 09:32:43 by lgatopreto        #+#    #+#             */
/*   Updated: 2022/05/10 09:36:20 by lgatopreto       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

void	ft_putchar(char c)
{
	write(STDOUT_FILENO, &c, sizeof(c));
}

void	ft_print(char a, char b, char d)
{
	write(STDOUT_FILENO, &a, sizeof(a));
	write(STDOUT_FILENO, &b, sizeof(b));
	write(STDOUT_FILENO, &d, sizeof(d));
	ft_putchar(',');
	ft_putchar(' ');
}

void	ft_print_comb(void)
{
	char	num[3];

	num[0] = '0';
	num[1] = '1';
	num[2] = '2';
	while (num[0] < '7' || num[1] < '8' || num[2] < '9')
	{
		ft_print(num[0], num[1], num[2]);
		if (num[0] <= '7' && num[2] != '9')
		{
			num[2]++;
		}
		else if (num[0] <= '7' && num[1] != '8' && num[2] == '9')
		{
			num[1]++;
			num[2] = num[1] + 1;
		}
		else if (num[0] < '7' && num[1] == '8' && num[2] == '9')
		{
			num[0]++;
			num[1] = num[0] + 1;
			num[2] = num[1] + 1;
		}
	}
	ft_print(num[0], num[1], num[2]);
}
