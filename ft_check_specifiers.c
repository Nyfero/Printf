/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_specifiers.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsap <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/21 12:41:16 by gsap              #+#    #+#             */
/*   Updated: 2021/06/23 16:35:10 by gsap             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

int	ft_check_specifier(const char *format, int i, char *info_aff)
{
	if (format[i] == 'c')
		info_aff = ft_strjoin_and_free(info_aff, "c,");
	else if (format[i] == 's')
		info_aff = ft_strjoin_and_free(info_aff, "s,");
	else if (format[i] == 'p')
		info_aff = ft_strjoin_and_free(info_aff, "p,");
	else if (format[i] == 'd')
		info_aff = ft_strjoin_and_free(info_aff, "d,");
	else if (format[i] == 'i')
		info_aff = ft_strjoin_and_free(info_aff, "i,");
	else if (format[i] == 'u')
		info_aff = ft_strjoin_and_free(info_aff, "u,");
	else if (format[i] == 'x')
		info_aff = ft_strjoin_and_free(info_aff, "x,");
	else if (format[i] == 'X')
		info_aff = ft_strjoin_and_free(info_aff, "X,");
	else if (format[i] == '%')
		info_aff = ft_strjoin_and_free(info_aff, "%,");
	else
		return (NULL);
	if (!info_aff)
		return (NULL);
	return (i + 1);
}
