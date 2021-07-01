/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsap <gsap@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/30 15:28:34 by gsap              #+#    #+#             */
/*   Updated: 2021/06/30 15:34:53 by gsap             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

t_print	*ft_aff_str(t_print *tab)
{
	char	*tmp;

	tmp = ft_strdup_printf(tab->aff);
	if (!tmp)
		return (NULL);
	if (tab->prec >= 0)
		tmp = ft_aff_prec_str(tmp, tab);
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

char	*ft_aff_prec_str(char *tmp, t_print *tab)
{
	char	*cpy;
	int		i;

	if (tab->spec == '%')
		return (tmp);
	cpy = (char *)malloc(sizeof(char) * (tab->prec + 1));
	if (!cpy)
		return (NULL);
	cpy[tab->prec] = 0;
	i = 0;
	while (i < tab->prec)
	{
		cpy[i] = tmp[i];
		i++;
	}
	free(tmp);
	return (cpy);
}
