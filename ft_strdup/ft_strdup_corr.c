/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup_corr.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgatopreto <maximegomes.dinis@outlook.fr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/11 16:07:15 by lgatopreto        #+#    #+#             */
/*   Updated: 2022/06/24 00:28:58 by romannbroque     ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>

static size_t	ft_strlen(const char *const string)
{
	if (*string == '\0')
		return (0);
	return (1 + ft_strlen(string + 1));
}

static char	*ft_strcpy(char *dest, const char *const src)
{
	if (*src == '\0')
		return (dest);
	*dest = *src;
	return (ft_strcpy(dest + 1, src + 1));
}

static char	*ft_strdup(const char *const string)
{
	const size_t	size = ft_strlen(string);
	char			*dup;

	dup = (char *)malloc((size + 1) * sizeof(char));
	if (dup != NULL)
	{
		ft_strcpy(dup, string);
		dup[size] = '\0';
	}
	return (dup);
}

int	main(int ac, char **av)
{
	if (ac > 1)
		printf("%s --> %s\n", av[1], ft_strdup(av[1]));
	return (EXIT_SUCCESS);
}

/*

addr|	value	| symb

100	|	'h'		| chr
101	|	'e'		| chr[1]
...

...

150	|	100		| ptr

*/
