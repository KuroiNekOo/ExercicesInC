/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcount.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgatopreto <maximegomes.dinis@outlook.fr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/21 10:50:59 by lgatopreto        #+#    #+#             */
/*   Updated: 2022/06/21 11:31:46 by lgatopreto       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h>

size_t	ft_strcount(char *str, char chr)
{
	if (*str == chr)
		return (1 + ft_strcount(++str, chr));
	if (*str != chr && *str != '\0')
		return (0 + ft_strcount(++str, chr));
	return (0);
}
