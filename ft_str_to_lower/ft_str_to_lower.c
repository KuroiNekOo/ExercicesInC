/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_to_lower.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgatopreto <maximegomes.dinis@outlook.fr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/11 16:07:15 by lgatopreto        #+#    #+#             */
/*   Updated: 2022/06/20 11:18:58 by lgatopreto       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h>

size_t	ft_strlen(const char *str)
{
	if (*str == '\0')
		return (1);
	return (1 + ft_strlen(++str));
}

char	*copystr(char *string, const char *str)
{
	if (*str == '\0')
		return (string);
	*string = *str;
	return (copystr((++string), (++str)));
}

char	*initializ(char	*string)
{
	if (*string != '\0')
	{
		if (*string >= 65 && *string <= 90)
			*string += 32;
		if (*string < 65 || *string > 90)
			initializ(++string);
	}
	return (string);
}

char	*ft_str_to_upper(const char *str)
{
	char	*dup;

	dup = malloc(ft_strlen(str) * sizeof(char));
	copystr(dup, str);
	initializ(dup);
	return (dup);
}
