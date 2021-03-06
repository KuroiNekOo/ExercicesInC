/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgatopreto <maximegomes.dinis@outlook.fr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/21 12:06:30 by lgatopreto        #+#    #+#             */
/*   Updated: 2022/06/21 14:42:46 by lgatopreto       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	int	sqrt;

	sqrt = 0;
	while (sqrt * sqrt <= nb && nb > 0)
	{
		if (sqrt * sqrt == nb)
			return (sqrt);
		++sqrt;
	}
	return (0);
}
