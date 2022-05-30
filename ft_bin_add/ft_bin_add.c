/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bin_add.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgatopreto <maximegomes.dinis@outlook.fr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/30 22:19:58 by lgatopreto        #+#    #+#             */
/*   Updated: 2022/05/30 22:22:59 by lgatopreto       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#define ASCII_OFFSET 48

void	binary_add(unsigned int a, unsigned int b, char *binary)
{
	long	nbr;
	int		i;

	nbr = a + b;
	i = 0;
	while (nbr > 0)
	{
		*binary = nbr % 2 + ASCII_OFFSET;
		nbr = nbr / 2;
		binary++;
		i++;
	}
}
