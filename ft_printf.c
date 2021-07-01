/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsap <gsap@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/25 15:26:26 by gsap              #+#    #+#             */
/*   Updated: 2021/07/01 14:18:00 by gsap             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf(const char *format, ...)
{
	int		i;
	t_print	*tab;

	tab = NULL;
	tab = ft_init_print(tab);
	i = 0;
	va_start (tab->args, format);
	while (format[i])
	{
		if (format[i] == '%')
		{
			tab = ft_all_check(format, i, tab);
			i = tab->count;
			tab = ft_put_format(tab);
			tab = ft_init_print(tab);
		}
		else
		{
			ft_putchar(format[i]);
			tab->length++;
		}
		i++;
	}
	i = tab->length;
	va_end(tab->args);
	free(tab);
	return (i);
}
