/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_factorial.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgatopreto <maximegomes.dinis@outlook.fr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/17 19:31:48 by lgatopreto        #+#    #+#             */
/*   Updated: 2022/06/11 17:07:02 by lgatopreto       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned long	ft_factorial(unsigned long nb)
{
	if (nb < 0)
		return (0);
	if (nb == 0 || nb == 1)
		return (1);
	return (nb * ft_factorial(nb - 1));
}
