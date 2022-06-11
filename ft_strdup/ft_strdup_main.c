/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup_main.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgatopreto <maximegomes.dinis@outlook.fr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/11 16:07:15 by lgatopreto        #+#    #+#             */
/*   Updated: 2022/06/11 16:48:43 by lgatopreto       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

void	ft_putchar(char c)
{
	write(STDOUT_FILENO, &c, sizeof(c));
}

size_t	ft_strlen(const char *string)
{
	if (*string == '\0')
		return (1);
	return (1 + ft_strlen(++string));
}

char	*copystr(char *str, const char *string)
{
	if (*string == '\0')
		return (str);
	*str = *string;
	return (copystr((++str), (++string)));
}

char	*ft_strdup(const char *string)
{
	char	*dup;

	dup = malloc(ft_strlen(string) * sizeof(char));
	copystr(dup, string);
	return (dup);
}

int	main(void)
{
	int		i;
	char	*str;

	i = 0;
	str = ft_strdup("Hello World Maxime !");
	while (str[i] != '\0')
	{
		ft_putchar(str[i]);
		++i;
	}
	return (EXIT_SUCCESS);
}
