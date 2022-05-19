/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   exo03.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgatopreto <maximegomes.dinis@outlook.fr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/13 21:52:57 by lgatopreto        #+#    #+#             */
/*   Updated: 2022/05/14 23:24:52 by lgatopreto       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

int main(void)
{
	int	tab[10];
	int	tab2[10];
	int	*tabptr[2]; //tableau de pointeur sur int
	int	*ptr;

	tab[0] = 42;
	tab2[0] = 42;
	ptr = tab;
	tabptr[0] = tab;
	tabptr[1] = tab2;
	*(tab + 1) = 43;
	*(ptr + 2) = 44;
	tabptr[1][3] = 52; //valeur de tab2 a la 4e position
	*(tabptr[1] + 4) = 62;
	*(*(tabptr + 1) + 5) = 72;
	
	printf("tableau 1: %d\n", tab[0]);
	printf("tableau 2: %d\n", tab[1]);
	printf("tableau 3: %d\n", tab[2]);

	printf("tableau2 4: %d\n", tabptr[1][3]);
	printf("tableau2 5: %d\n", tabptr[1][4]);
	printf("tableau2 6: %d\n", tabptr[1][5]);

	return (EXIT_SUCCESS);
}
