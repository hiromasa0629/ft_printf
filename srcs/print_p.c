/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_p.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyap <hyap@student.42kl.edu.my>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/23 14:20:39 by hyap              #+#    #+#             */
/*   Updated: 2022/01/23 18:24:45 by hyap             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

int	print_p(void *v)
{
	unsigned long long ptraddr;

	ptraddr = (unsigned long long)v;

	printf("%p", v);
	return (0);
}
