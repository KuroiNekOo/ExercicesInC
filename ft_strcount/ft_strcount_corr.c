/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcount_corr.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgatopreto <maximegomes.dinis@outlook.fr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/21 10:50:59 by lgatopreto        #+#    #+#             */
/*   Updated: 2022/06/23 23:55:52 by romannbroque     ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>

size_t	ft_strcount(char *str, char chr)
{
	if (chr == '\0')
		return (1);
	if (*str != '\0')
		return ((*str == chr) + ft_strcount(str + 1, chr));
	return (0);
}

int	main(int ac, char **av)
{
	if (ac > 2)
		printf("%zu\n", ft_strcount(av[1], av[2][0]));
	return (EXIT_SUCCESS);
}
