/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyap <hyap@student.42kl.edu.my>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/20 01:19:50 by hyap              #+#    #+#             */
/*   Updated: 2022/01/23 14:35:19 by hyap             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		ft_putchar(str[i++]);
}

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

size_t	ft_strlen(const char *s)
{
	int i;

	i = 0;
	while(s[i])
		i++;
	return (i);
}
