/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsap <gsap@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/27 17:49:04 by gsap              #+#    #+#             */
/*   Updated: 2021/07/14 12:41:06 by gsap             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

t_print	*ft_all_check(const char *format, int i, t_print *tab)
{
	i++;
	tab = ft_check_flags(format, i, tab);
	i += tab->count;
	tab->count = 0;
	tab = ft_check_width(format, i, tab);
	if (format[i] == '*')
		i += 1;
	else
		i += tab->count;
	tab->count = 0;
	tab = ft_check_precision(format, i, tab);
	if (format[i] == '.' && format[i + 1] == '*')
		i += 2;
	else
		i += tab->count;
	tab->spec = format[i];
	tab->count = i;
	tab = ft_check_spec(tab);
	tab = ft_put_format(tab);
	return (tab);
}

t_print	*ft_check_flags(const char *format, int i, t_print *tab)
{
	while (format[i] == '0' || format[i] == '-' || format[i] == '#'
		|| format[i] == ' ' || format[i] == '+')
	{
		if (format[i] == '0' && tab->flags == 0)
			tab->flags = '0';
		else if (format[i] == '-' && (tab->flags == 0 || tab->flags == '0'))
			tab->flags = '-';
		else if (format[i] == '+' && tab->bonus == 0)
			tab->bonus = '+';
		else if (format[i] == '#' && tab->bonus == 0)
			tab->bonus = '#';
		else if (format[i] == ' ' && tab->bonus == 0)
			tab->bonus = ' ';
		tab->count += 1;
		i++;
	}
	if (!(tab->flags))
		tab->flags = 'x';
	return (tab);
}

t_print	*ft_check_width(const char *format, int i, t_print *tab)
{
	while (ft_isdigit(format[i]))
	{
		tab->width = (tab->width * 10) + (format[i] - 48);
		tab->count += 1;
		i++;
	}
	if (format[i] == '*')
	{
		tab->width = va_arg(tab->args, int);
		if (tab->width < 0)
		{
			tab->flags = '-';
			tab->width *= -1;
		}
		tab->count += 1;
	}
	return (tab);
}

t_print	*ft_check_precision(const char *format, int i, t_print *tab)
{
	if (format[i] == '.')
	{
		i++;
		tab->prec++;
		tab->count += 1;
		while (ft_isdigit(format[i]))
		{
			tab->prec = (tab->prec * 10) + (format[i] - 48);
			tab->count += 1;
			i++;
		}
		if (format[i] == '*')
		{
			tab->prec = va_arg(tab->args, int);
			tab->count += ft_lenght_nbr(tab->prec);
		}
	}
	return (tab);
}

t_print	*ft_check_spec(t_print *tab)
{
	if (tab->spec == 'c')
		tab->afchar = va_arg(tab->args, int);
	else if (tab->spec == 's')
	{
		tab->aff = va_arg(tab->args, char *);
		if (!tab->aff)
			tab->aff = "(null)";
	}
	else if (tab->spec == '%')
		tab->aff = "%";
	else if (tab->spec == 'p')
		tab->aff = ft_to_hexa(va_arg(tab->args, unsigned long int), tab->spec);
	else if (tab->spec == 'd' || tab->spec == 'i')
		tab->aff = ft_itoa(va_arg(tab->args, int));
	else if (tab->spec == 'u')
		tab->aff = ft_uitoa(va_arg(tab->args, unsigned int));
	else if (tab->spec == 'X' || tab->spec == 'x')
		tab->aff = ft_to_hexa(va_arg(tab->args, unsigned int), tab->spec);
	return (tab);
}
