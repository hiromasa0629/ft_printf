/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils_two.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyap <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/26 16:01:16 by hyap              #+#    #+#             */
/*   Updated: 2022/02/26 21:48:47 by hyap             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

int	ft_numlen(long long int num)
{	
	int	size;

	size = 0;
	if (num == 0)
		return (1);
	while (num != 0)
	{
		num /= 10;
		size++;
	}
	return (size);
}

int	ft_isalpha(char c)
{
	if (c >= 65 && c <= 90)
		return (1);
	else if (c >= 97 && c <= 122)
		return (1);
	else
		return (0);
}

char	ft_toupper(char c)
{
	return (c - 32);
}
