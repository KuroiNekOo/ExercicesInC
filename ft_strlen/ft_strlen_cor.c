/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen_cor.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgatopreto <maximegomes.dinis@outlook.fr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/15 12:37:42 by lgatopreto        #+#    #+#             */
/*   Updated: 2022/05/15 14:19:21 by lgatopreto       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>

size_t	ft_strlen(const char *str)
{	
	size_t	len;

	len = 0;
	while (str[len] != '\0')
		len++;
	return (len);
}

int	main(int ac, char *ag[])
{
	if (ac > 1)
		printf("%zu\n", ft_strlen(ag[1]));
	return (EXIT_SUCCESS);
}
