/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_remove_whitespaces_main.c                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgatopreto <maximegomes.dinis@outlook.fr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/10 00:21:18 by lgatopreto        #+#    #+#             */
/*   Updated: 2022/06/11 11:33:28 by lgatopreto       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

#define SPACE 32
#define TAB 9
#define NEWLINE 10

void	ft_putchar(char c)
{
	write(STDOUT_FILENO, &c, sizeof(c));
}

size_t	ft_strlen(const char *str)
{
	if (*str == SPACE || *str == TAB || *str == NEWLINE)
		return (ft_strlen(str + 1));
	if (*str == '\0')
		return (1);
	return (1 + ft_strlen(str + 1));
}

void	copystr(char *tab, size_t size, const char *str)
{
	size_t	i;

	i = 0;
	while (i < size)
	{
		tab[i] = *str;
		if (*str == SPACE || *str == TAB || *str == NEWLINE)
			--i;
		++i;
		++str;
	}
}

char	*ft_remove_whitespaces(const char *str)
{
	size_t	n;
	char	*tab;

	n = ft_strlen(str);
	printf("size: %zu\n", n);
	tab = malloc(n * sizeof(char));
	copystr(tab, n, str);
	return (tab);
}

int	main(void)
{
	int		i;
	char	*str;

	i = 0;
	str = ft_remove_whitespaces("Hello World\nMaxime\t!");
	while (str[i] != '\0')
	{
		ft_putchar(str[i]);
		++i;
	}
	return (EXIT_SUCCESS);
}
