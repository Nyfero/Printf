/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_flags.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsap <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/21 12:04:29 by gsap              #+#    #+#             */
/*   Updated: 2021/06/23 16:34:36 by gsap             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

int	ft_check_flags(const char *format, int i, char *info_aff)
{
	int	flag_0;
	int	flag_l;

	flags_0 = 0;
	flag_l = 0;
	while (format[i] == '-' || format[i] == '0')
	{
		if (format[i] == '-' && flag_l == 0)
		{
			ft_l_flags_init(info_aff);
			flag_l++;
		}
		if (format[i] == '0' && flag_l == 0 && flag_0 == 0)
		{
			ft_0_flags_init(info_aff);
			flag_0++;
		}
		i++;
	}
	if (!info_aff)
		ft_no_flags_init(info_aff);
	return (i);
}
