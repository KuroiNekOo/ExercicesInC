/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   exo01.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgatopreto <maximegomes.dinis@outlook.fr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/13 21:52:57 by lgatopreto        #+#    #+#             */
/*   Updated: 2022/05/14 16:29:26 by lgatopreto       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

int main(void)
{
	int	a;
	int *ptr; //pointeur sur int (pointe sur un int)
	int **ptr2; //pointeur de pointeur sur int
	int	***ptr3;
	int	****ptr4;
	int	*****ptr5;
	int	******ptr6;
	int	*******ptr7;

	a = 3;
	ptr = &a; //ptr récupère l'adresse de la variable a
	ptr2 = &ptr; //ptr2 récupère l'adresse de ptr qui lui récupère l'adresse a
	ptr3 = &ptr2;
	ptr4 = &ptr3;
	ptr5 = &ptr4;
	ptr6 = &ptr5;
	ptr7 = &ptr6;

	printf("adress a: %p\n", &a);
	printf("adress a: %p\n", ptr);
	printf("adress a: %p\n", *ptr2);
	printf("adress a: %p\n", **ptr3);
	printf("adress a: %p\n", ***ptr4);
	printf("adress a: %p\n", ****ptr5);
	printf("adress a: %p\n", *****ptr6);
	printf("adress a: %p\n", ******ptr7);

	printf("valeur a: %d\n", *ptr);
	printf("valeur a: %d\n", **ptr2);
	printf("valeur a: %d\n", ***ptr3);
	printf("valeur a: %d\n", ****ptr4);
	printf("valeur a: %d\n", *****ptr5);
	printf("valeur a: %d\n", ******ptr6);
	printf("valeur a: %d\n", *******ptr7);

	printf("adress ptr: %p\n", &ptr);
	printf("adress ptr2: %p\n", &ptr2);
	printf("adress ptr3: %p\n", &ptr3);
	printf("adress ptr4: %p\n", &ptr4);
	printf("adress ptr5: %p\n", &ptr5);
	printf("adress ptr6: %p\n", &ptr6);
	printf("adress ptr7: %p\n", &ptr7);
	return (EXIT_SUCCESS);
}
