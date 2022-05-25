/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_s.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyap <hyap@student.42kl.edu.my>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/21 00:43:18 by hyap              #+#    #+#             */
/*   Updated: 2022/02/26 21:31:54 by hyap             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

int	print_s(char *str)
{
	size_t	size;

	size = ft_strlen(str);
	if (str)
		ft_putstr(str);
	else
	{
		ft_putstr("(null)");
		size = 6;
	}
	return (size);
}
