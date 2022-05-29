/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgatopreto <maximegomes.dinis@outlook.fr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/29 13:07:48 by lgatopreto        #+#    #+#             */
/*   Updated: 2022/05/29 13:35:49 by lgatopreto       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

#define MIN '0'
#define MAX '9'

int	ft_atoi(const char *str)
{
	int	result;
	int	negative;

	result = 0;
	negative = 1;
	while (*str && (*str == ' ' || *str == '\n' || *str == '\r'
			|| *str == '\f' || *str == '\v' || *str == '\r'))
		++str;
	if (*str == '-')
		negative = -1;
	if (*str == '-' || *str == '+')
		++str;
	while (*str && *str >= MIN && *str <= MAX)
	{
			result = result * 10 + (*str - 48);
			++str;
	}
	return (result * negative);
}
