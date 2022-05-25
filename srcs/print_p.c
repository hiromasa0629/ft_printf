/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_p.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyap <hyap@student.42kl.edu.my>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/23 14:20:39 by hyap              #+#    #+#             */
/*   Updated: 2022/02/26 21:46:28 by hyap             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

int	print_p(void *v)
{
	unsigned long long	ptraddr;
	char				*string;
	int					remainder;
	int					hexlen;

	ptraddr = (unsigned long long)v;
	hexlen = ft_hexlen(ptraddr) + 2;
	string = (char *)malloc(hexlen + 1);
	string[hexlen--] = '\0';
	string[0] = '0';
	string[1] = 'x';
	if (ptraddr == 0)
		string[hexlen] = '0';
	while (ptraddr > 0)
	{
		remainder = ptraddr % 16;
		if (remainder > 9)
			string[hexlen--] = remainder + 87;
		else
			string[hexlen--] = remainder + 48;
		ptraddr /= 16;
	}
	ft_putstr(string);
	free(string);
	return (ft_hexlen((unsigned long long)v) + 2);
}
