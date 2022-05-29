/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ascending_sort_array.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgatopreto <maximegomes.dinis@outlook.fr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/10 21:34:34 by lgatopreto        #+#    #+#             */
/*   Updated: 2022/05/16 17:41:47 by lgatopreto       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void	ascending_sort_array(int *array, const size_t size)
{
	size_t	i;
	int		tmp;
	int		j;

	tmp = 0;
	i = 1;
	while (i <= size - 1)
	{
		j = i;
		i++;
		while (j > 0 && array[j - 1] > array[j])
		{
			tmp = array[j];
			array[j] = array[j - 1];
			array[j - 1] = tmp;
			j--;
		}
	}
}
