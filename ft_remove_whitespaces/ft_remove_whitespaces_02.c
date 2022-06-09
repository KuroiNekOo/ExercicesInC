/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_remove_whitespaces.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgatopreto <maximegomes.dinis@outlook.fr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/09 11:25:13 by lgatopreto        #+#    #+#             */
/*   Updated: 2022/06/09 15:23:27 by lgatopreto       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h> // malloc
#include <unistd.h>

#define SPACE 32
#define NUL 0

/*
void	ft_putchar(char c)
{
	write(STDOUT_FILENO, &c, sizeof(c));
}
*/

size_t	get_bin_size(const char *str)
{
	size_t	size;

	if (*str == '\0')
		return (1);
	size = 0;
	while (*str != '\0')
	{
		++size;
		++str;
	}
	return (size);
}

void	add_tab(char *tab, size_t size, const char *str)
{
	size_t	i;

	i = 0;
	while (i < size)
	{
		tab[i] = *str;
		printf("%c", tab[i]);
		++i;
		++str;
	}
	printf("\n");
}

char * ft_remove_whitespaces(const char *str)
{
	size_t	n;
	size_t	i;
	int		j;
	char	tmp;

	i = 0;
	j = 0;
	n = get_bin_size(str);
	printf("size: %zu\n", n);
	char *tab = malloc(n * sizeof(char));
	add_tab(tab, n, str);

	while (tab[i] != '\0')
	{
		j = i;
		if (tab[i] == SPACE)
		{
			//tab[i] = NUL;
			while (tab[j-1] != '\0')
				{
					tmp = tab[j];
					tab[j] = tab[j+1];
					tab[j+1] = tmp;
					printf("%c", tab[j]);
					++j;
				}
			printf("\n");
		}
		printf("%c", tab[i]);
		++i;
	}
	printf("\n");
	n = i;
	printf("size: %zu\n", n);
	printf("i: %zu\n", i);
	printf("Ensuite...\n");

	i = 0;
	while (tab[i] != '\0')
	{
		printf("%c", tab[i]);
		++i;
	}
	printf("\n");
	printf("size: %zu\n", n);
	printf("i: %zu\n", i);
	printf("taille: %zu\n", sizeof(tab));
	
	return (tab);
}

int main(void)
{
	ft_remove_whitespaces("Hello World !");
	return (EXIT_SUCCESS);
}
