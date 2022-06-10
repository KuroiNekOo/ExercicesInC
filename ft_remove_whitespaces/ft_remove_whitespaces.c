/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_remove_whitespaces.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgatopreto <maximegomes.dinis@outlook.fr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/10 00:21:18 by lgatopreto        #+#    #+#             */
/*   Updated: 2022/06/11 00:29:37 by lgatopreto       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h>

#define SPACE 32
#define TAB 9
#define NEWLINE 10

size_t	ft_strlen(const char *str)
{
	size_t	size;

	size = 0;
	if (*str == '\0')
		return (1);
	while (str[size] != '\0')
	{
		if (*str == SPACE || *str == TAB || *str == NEWLINE)
			--size;
		++size;
	}
	return (size + 1);
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
	char	*tab;

	n = ft_strlen(str);
	tab = malloc(n * sizeof(char));
	copystr(tab, n, str);
	return (tab);
}
