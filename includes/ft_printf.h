/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyap <hyap@student.42kl.edu.my>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/13 15:09:06 by hyap              #+#    #+#             */
/*   Updated: 2022/01/26 22:06:28 by hyap             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# include <stdio.h>
# include <stdlib.h>
# include <stdarg.h>
# include <unistd.h>

typedef struct s_str
{
	int		i;
}				t_str;

int		ft_printf(const char *av, ...);
int		conversion(char *str, int i, va_list ap);
void	ft_putstr(char *str);
void	ft_putchar(char c);
int		print_c(char c);
int		print_s(char *s);
int		print_p(void *v);
size_t	ft_strlen(const char *s);


#endif
