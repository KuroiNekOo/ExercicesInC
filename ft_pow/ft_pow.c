/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pow.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgatopreto <maximegomes.dinis@outlook.fr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/17 02:48:28 by lgatopreto        #+#    #+#             */
/*   Updated: 2022/05/17 23:17:57 by lgatopreto       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

long	ft_pow(const int nb, const unsigned int pow)
{
	long			result;
	unsigned int	i;
	long			tmp;

	result = 0;
	i = 0;
	tmp = nb;
	while (i < pow - 1)
	{
		tmp = tmp * nb;
		result = tmp;
		i++;
	}
	return (result);
}
