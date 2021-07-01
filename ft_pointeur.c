/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pointeur.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsap <gsap@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/30 15:28:22 by gsap              #+#    #+#             */
/*   Updated: 2021/07/01 16:57:45 by gsap             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

t_print	*ft_aff_point(t_print *tab)
{
	char	*tmp;

	if (tab->spec == 'p')
		tmp = ft_strjoin_and_free_s2("0x", tab->aff);
	else
	{
		tmp = ft_strdup(tab->aff);
		free(tab->aff);
	}
	if (!tmp)
		return (NULL);
	if (tab->prec > (int)ft_strlen(tmp))
		tmp = ft_aff_prec(tmp, tab);
	if (tab->width > (int)ft_strlen(tmp))
	{
		tmp = ft_aff_width(tmp, tab);
		if (tab->flags == '0' || tab->flags == '-')
			tmp = ft_aff_flags(tmp, tab);
	}
	tab->aff = ft_strdup(tmp);
	tab->length += ft_strlen(tmp);
	free(tmp);
	return (tab);
}
