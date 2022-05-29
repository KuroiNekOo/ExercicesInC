/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgatopreto <maximegomes.dinis@outlook.fr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/15 12:37:42 by lgatopreto        #+#    #+#             */
/*   Updated: 2022/05/15 12:48:03 by lgatopreto       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

size_t	ft_strlen(const char *str)
{	
	size_t	size;
	int		i;

	i = 1;
	while (*str != '\0')
	{
		str++;
		i++;
	}
	size = sizeof(*str) * i;
	return (size);
}
