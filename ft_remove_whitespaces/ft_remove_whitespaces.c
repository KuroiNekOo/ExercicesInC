/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_remove_whitespaces.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgatopreto <maximegomes.dinis@outlook.fr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/10 00:21:18 by lgatopreto        #+#    #+#             */
/*   Updated: 2022/06/11 11:41:15 by lgatopreto       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h>

#define SPACE 32
#define TAB 9
#define NEWLINE 10

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
		++i;
		if (*str == SPACE || *str == TAB || *str == NEWLINE)
			--i;
		++str;
	}
}

char	*ft_remove_whitespaces(const char *str)
{
	char	*tab;

	tab = malloc(ft_strlen(str) * sizeof(char));
	copystr(tab, n, str);
	return (tab);
}
