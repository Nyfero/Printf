/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_uint.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsap <gsap@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/01 17:01:03 by gsap              #+#    #+#             */
/*   Updated: 2021/07/01 17:51:03 by gsap             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

t_print	*ft_aff_uint(t_print *tab)
{
	char	*tmp;

	tmp = ft_strdup(tab->aff);
	if (!tmp)
		return (NULL);
	if (tab->prec >= (int)ft_strlen(tmp) || (tmp[0] == '0' && tab->prec == 0))
		tmp = ft_aff_prec_int(tmp, tab);
	if (tab->width > (int)ft_strlen(tmp))
	{
		tmp = ft_aff_width(tmp, tab);
		if (tab->flags == '-' || (tab->flags == '0' && tab->prec == -1))
			tmp = ft_aff_flags(tmp, tab);
	}
	if (tab->aff[0])
		free(tab->aff);
	tab->aff = ft_strdup(tmp);
	tab->length += ft_strlen(tmp);
	free(tmp);
	return (tab);
}
