/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_remove_whitespaces.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgatopreto <maximegomes.dinis@outlook.fr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/10 00:21:18 by lgatopreto        #+#    #+#             */
/*   Updated: 2022/06/11 14:58:47 by lgatopreto       ###   ########.fr       */
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

char	*copystr(char *tab, const char *str)
{
	while (*str == SPACE || *str == TAB || *str == NEWLINE)
		++str;
	if (*str == '\0')
		return (tab);
	*tab = *str;
	return (copystr((++tab), (++str)));
}

char	*ft_remove_whitespaces(const char *str)
{
	char	*tab;

	tab = malloc(ft_strlen(str) * sizeof(char));
	copystr(tab, str);
	return (tab);
}
