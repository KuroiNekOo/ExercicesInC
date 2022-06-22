/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_to_lower_corr.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgatopreto <maximegomes.dinis@outlook.fr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/11 16:07:15 by lgatopreto        #+#    #+#             */
/*   Updated: 2022/06/22 12:26:57 by romannbroque     ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>

#define FIRST_UP 'A'
#define LAST_UP 'Z'
#define LOW_SHIFT 32

size_t	ft_strlen(const char *str)
{
	if (*str == '\0')
		return (0);
	return (1 + ft_strlen(++str));
}

char	*ft_strcpy(char *dest, const char *src)
{
	*dest = *src;
	if (*src == '\0')
		return (dest);
	return (ft_strcpy((++dest), (++src)));
}

void	to_lower(char *string)
{
	if (*string != '\0')
	{
		if (*string >= FIRST_UP && *string <= LAST_UP)
			*string += LOW_SHIFT;
		if (*string < FIRST_UP || *string > LAST_UP)
			to_lower(++string);
	}
}

char	*ft_str_to_lower(const char *str)
{
	char	*dup;

	dup = malloc((ft_strlen(str) + 1) * sizeof(char));
	if (dup != NULL)
	{
		ft_strcpy(dup, str);
		to_lower(dup);
	}
	return (dup);
}

int	main(int ac, char **av)
{
	char *str;

	if (ac > 1)
	{
		str = av[1];
		printf("%s --> %s\n", str, ft_str_to_lower(str));
	}
	return (EXIT_SUCCESS);
}
