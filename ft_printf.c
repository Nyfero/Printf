/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsap <gsap@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/25 15:26:26 by gsap              #+#    #+#             */
/*   Updated: 2021/07/14 13:10:24 by gsap             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf(const char *format, ...)
{
	int		i;
	t_print	*tab;

	tab = NULL;
	tab = ft_init_print(tab);
	i = -1;
	va_start (tab->args, format);
	while (format[++i])
	{
		if (format[i] != '%')
			ft_putchar(format[i]);
		if (format[i] != '%')
			tab->length++;
		if (format[i] == '%')
		{
			tab = ft_all_check(format, i, tab);
			i = tab->count;
			tab = ft_init_print(tab);
		}
	}
	i = tab->length;
	va_end(tab->args);
	free(tab);
	return (i);
}

t_print	*ft_init_print(t_print *tab)
{
	if (!tab)
	{
		tab = (t_print *)malloc(sizeof(t_print));
		tab->length = 0;
		tab->spec = 0;
	}
	if (!tab)
		return (NULL);
	if (tab->spec != 0)
		free(tab->aff);
	tab->flags = 0;
	tab->bonus = 0;
	tab->width = 0;
	tab->prec = -1;
	tab->spec = 0;
	tab->count = 0;
	tab->aff = 0;
	tab->afchar = 0;
	return (tab);
}
