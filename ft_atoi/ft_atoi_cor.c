/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgatopreto <maximegomes.dinis@outlook.fr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/29 13:07:48 by lgatopreto        #+#    #+#             */
/*   Updated: 2022/05/29 14:35:39 by romannbroque     ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

#define ZERO '0'
#define NINE '9'
#define	FIRST_WHITESPACE 9
#define	LAST_WHITESPACE 13
#define SPACE ' '
#define ASCII_OFFSET 48

int	ft_atoi(const char *str)
{
	int	result;
	int	sign;

	result = 0;
	sign = 1;
	while (str != NULL && (*str == SPACE ||
		(*str >= FIRST_WHITESPACE && *str <= LAST_WHITESPACE)))
		++str;
	if (*str == '-')
		sign = -1;
	if (*str == '-' || *str == '+')
		++str;
	while (str != NULL && *str >= ZERO && *str <= NINE)
	{
		result = result * 10 + (*str - ASCII_OFFSET);
		++str;
	}
	return (result * sign);
}
