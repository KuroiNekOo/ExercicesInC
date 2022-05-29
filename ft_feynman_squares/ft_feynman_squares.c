/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_feynman_squares.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgatopreto <maximegomes.dinis@outlook.fr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/29 17:48:24 by lgatopreto        #+#    #+#             */
/*   Updated: 2022/05/29 17:50:17 by lgatopreto       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned long	feynman_squares(unsigned int n)
{
	if (n == 0)
		return (0);
	return (n * n + feynman_squares(n - 1));
}
