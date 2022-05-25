/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyap <hyap@student.42kl.edu.my>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/14 16:52:34 by hyap              #+#    #+#             */
/*   Updated: 2022/02/27 17:25:13 by hyap             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

int	ft_printf(const char *av, ...)
{
	va_list	ap;
	t_str	*attr;
	char	*str;
	int		size;

	attr = malloc(sizeof(*attr));
	attr->i = 0;
	str = (char *)av;
	size = 0;
	va_start(ap, av);
	while (str[attr->i])
	{
		if (str[attr->i] == '%')
			size += conversion(str, ++attr->i, ap);
		else
		{
			ft_putchar(str[attr->i]);
			size++;
		}
		attr->i++;
	}
	va_end(ap);
	free(attr);
	return (size);
}
