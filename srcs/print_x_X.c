/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_x_X.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyap <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/26 18:09:57 by hyap              #+#    #+#             */
/*   Updated: 2022/02/27 17:25:39 by hyap             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

void	print_x_recursion(unsigned int num, int isUpperCase)
{
	char	c;

	if (num >= 16)
		print_x_recursion(num / 16, isUpperCase);
	c = HEX[num % 16];
	if (isUpperCase && ft_isalpha(c))
		ft_putchar(ft_toupper(c));
	else
		ft_putchar(c);
}

int	print_x(int num, int isUpperCase)
{
	int				size;
	unsigned int	u_num;

	u_num = (unsigned int)num;
	size = ft_hexlen(u_num);
	print_x_recursion(num, isUpperCase);
	return (size);
}
