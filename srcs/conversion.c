/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   conversion.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyap <hyap@student.42kl.edu.my>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/20 00:51:03 by hyap              #+#    #+#             */
/*   Updated: 2022/02/26 21:19:25 by hyap             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

int	conversion(char *str, int i, va_list ap)
{
	int	size;

	size = 0;
	if (str[i] == 'c')
		size = print_c(va_arg(ap, int));
	else if (str[i] == 's')
		size = print_s(va_arg(ap, char *));
	else if (str[i] == 'p')
		size = print_p(va_arg(ap, void *));
	else if (str[i] == 'd' || str[i] == 'i')
		size = print_d_i(va_arg(ap, int));
	else if (str[i] == 'u')
		size = print_u(va_arg(ap, unsigned int));
	else if (str[i] == 'x')
		size = print_x(va_arg(ap, int), 0);
	else if (str[i] == 'X')
		size = print_x(va_arg(ap, int), 1);
	else if (str[i] == '%')
	{
		ft_putchar(str[i]);
		size = 1;
	}
	return (size);
}
