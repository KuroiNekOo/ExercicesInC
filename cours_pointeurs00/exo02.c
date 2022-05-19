/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   exo02.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgatopreto <maximegomes.dinis@outlook.fr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/13 21:52:57 by lgatopreto        #+#    #+#             */
/*   Updated: 2022/05/14 22:21:39 by lgatopreto       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

int main(void)
{
	int	a;
	int b;
	int *ptr; //pointeur sur int (pointe sur un int)
	
	a = 1;
	b = 42;
	ptr = &b; //ptr récupère l'adresse de la variable b

	printf("adress a: %p\n", &a); //adresse de a
	printf("adress ptr: %p\n", &ptr); //adresse de ptr
	printf("adress a: %p\n", ptr + 1); //adresse du int apres (a)
	printf("adress a: %p\n", ptr + a); //adresse du int apres (a)

	printf("valeur a: %d\n", *(ptr + 1)); //valeur de a 
	printf("valeur a: %d\n", *(ptr + a)); //valeur de a 
	printf("valeur b: %d\n", *ptr); //valeur de b
	printf("adress b: %p\n", &b); //adress de b

	// """""""""""""""""""""""""""""""""""""""""""""""""""""

	char	c;
	char	d;
	char	*ptr2;

	c = '3';
	d = '0';
	ptr2 = &d;

	printf("adress c: %p\n", &c); //adress de c
	printf("adress d: %p\n", &d); //adresse de d
	printf("adress d: %p\n", ptr2); //adresse de d

	return (EXIT_SUCCESS);
}
