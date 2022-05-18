/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ascending_sort_array.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgatopreto <maximegomes.dinis@outlook.fr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/10 21:34:34 by lgatopreto        #+#    #+#             */
/*   Updated: 2022/05/17 23:08:08 by romannbroque     ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

void	ascending_sort_array(int *array, const size_t size)
{
	size_t	i;
	size_t	tmp;
	size_t	j;

	if (size == 0 || array == NULL)
		return ;
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

int	main(void)
{
	const size_t	size = 5;
	size_t			i;
	int				array[] = {3, 5, 6, -2, 0};

	i = 0;
	while (i < size)
	{
		printf("%d, ", array[i]);
		++i;
	}
	printf("\n");
	i = 0;
	ascending_sort_array(array, size);
	while (i < size)
	{
		printf("%d, ", array[i]);
		++i;
	}
	return (EXIT_SUCCESS);
}
