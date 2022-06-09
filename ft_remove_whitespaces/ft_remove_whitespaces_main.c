/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_remove_whitespaces_main.c                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgatopreto <maximegomes.dinis@outlook.fr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/10 00:21:18 by lgatopreto        #+#    #+#             */
/*   Updated: 2022/06/10 00:26:16 by lgatopreto       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

#define SPACE 32
#define TAB 9
#define NEWLINE 10

/*
void	ft_putchar(char c)
{
	write(STDOUT_FILENO, &c, sizeof(c));
}
*/

size_t	ft_strlen(const char *str)
{
	size_t	size;

	if (*str == '\0')
		return (1);
	size = 0;
	while (*str != '\0')
	{
		if (*str == SPACE || *str == TAB || *str == NEWLINE)
			--size;
		++size;
		++str;
	}
	++size;
	return (size);
}

void	copystr(char *tab, size_t size, const char *str)
{
	size_t	i;

	i = 0;
	while (i < size)
	{
		tab[i] = *str;
		++i;
		if (*str == SPACE || *str == TAB || *str == NEWLINE)
			--i;
		++str;
	}
}

char	*ft_remove_whitespaces(const char *str)
{
	size_t	n;
	size_t	i;
	char	*tab;

	i = 0;
	n = ft_strlen(str);
	tab = malloc(n * sizeof(char));
	copystr(tab, n, str);
	i = 0;
	while (tab[i] != '\0')
	{
		printf("%c", tab[i]);
		++i;
	}
	return (tab);
}

int	main(void)
{
	ft_remove_whitespaces("Hello World\nMaxime\t!");
	return (EXIT_SUCCESS);
}
