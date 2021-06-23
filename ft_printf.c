/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsap <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/20 14:26:35 by gsap              #+#    #+#             */
/*   Updated: 2021/06/23 16:36:45 by gsap             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"
#include <stdio.h>

int	ft_printf(const char *format, ...)
{
	int		i;
	char	*info_aff;

	i = 0;
	while (format[i])
	{
		if (format[i] == '%')
		{
			i = ft_all_check(format, i, info_aff);

			ft_putstr(/*mon argument en fonction de info_aff*/);
			free(info_aff);
		}
		else
			ft_putchar(format[i]);
		i++;
	}
	return (i);
}

int	ft_all_check(const char *format, int i, char *info_aff)
{
	i++;
	info_aff = ft_strdup("");
	i = ft_check_flags(format, i, info_aff);
	i = ft_check_width(format, i, info_aff);
	i = ft_check_precision(format, i, info_aff);
	i = ft_check_specifier(format, i, info_aff);
	return (i);
}
