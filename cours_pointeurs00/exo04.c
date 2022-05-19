/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   exo04.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgatopreto <maximegomes.dinis@outlook.fr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/13 21:52:57 by lgatopreto        #+#    #+#             */
/*   Updated: 2022/05/15 02:12:34 by lgatopreto       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

int main(void)
{
	char	c;
	char	*ptr;
	char 	ptr2[] = "toto";
	char	*ptr3;

	c = '*';
	ptr = "toto"; // adress du caractere 't' de toto 
	ptr3 = "lol";
	//ptr[0] = 'p'; [PAS LE DROIT]
	ptr2[0] = 'p';
	ptr = ptr3; // remplace adress 't' par 'l'

	printf("valeur de c: %c\n", c);
	printf("valeur de ptr: %c\n", *ptr);
	printf("valeur de ptr: %c\n", ptr[0]);
	printf("valeur de ptr2[]: %c\n", ptr2[0]);
	printf("valeur total de ptr: %s\n", ptr + 0);

	return (EXIT_SUCCESS);
}
