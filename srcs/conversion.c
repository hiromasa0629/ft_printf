/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   conversion.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyap <hyap@student.42kl.edu.my>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/20 00:51:03 by hyap              #+#    #+#             */
/*   Updated: 2022/01/26 22:13:20 by hyap             ###   ########.fr       */
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
	return (size);
}
