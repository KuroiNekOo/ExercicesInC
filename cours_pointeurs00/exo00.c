/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   exo00.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgatopreto <maximegomes.dinis@outlook.fr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/13 21:52:57 by lgatopreto        #+#    #+#             */
/*   Updated: 2022/05/13 23:21:59 by lgatopreto       ###   ########.fr       */
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

	a = 3;
	ptr = &a; //ptr récupère l'adresse de la variable a
	ptr2 = &ptr; //ptr2 récupère l'adresse de ptr qui lui récupère l'adresse a

	printf("adress a: %p\n", &a); //affiche l'adresse de la variable a
	printf("adress a: %p\n", ptr); //affiche l'adresse de la variable stockée
	printf("valeur a: %d\n", *ptr); //affiche valeur du pointeur (a)

	// première possibilité	
	a = 42;
	printf("valeur a: %d\n", *ptr); //affiche valeur du pointeur (a)

	// seconde possibilité
	*ptr = 84;
	printf("valeur a: %d\n", a); //affiche valeur de a

	// '''''''''''''''''''''
	printf("valeur ptr(a): %d\n", **ptr2); //affiche valeur de ptr2
	printf("adress ptr(pointer): %p\n", ptr2); //affiche ladress de ptr

	**ptr2 = 99;
	printf("valeur ptr(a): %d\n", **ptr2); //affiche valeur de ptr2
	printf("adress ptr: %p\n", *ptr2); //affiche l'adrese que comporte ptr
	printf("adress ptr: %p\n", &ptr); //affiche l'adrese que comporte ptr
	return (EXIT_SUCCESS);
}
