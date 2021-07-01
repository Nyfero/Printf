/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_char.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsap <gsap@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/30 15:28:06 by gsap              #+#    #+#             */
/*   Updated: 2021/06/30 15:33:39 by gsap             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

t_print	*ft_aff_char(t_print *tab)
{
	char	*tmp;

	tmp = ft_calloc(2, 1);
	if (!tmp)
		return (NULL);
	tmp[0] = tab->afchar;
	tmp[1] = 0;
	if (tab->prec > 1)
		tmp = ft_aff_prec_char(tmp, tab);
	if (tab->width > (int)ft_strlen(tmp))
	{
		tmp = ft_aff_width(tmp, tab);
		if (tab->flags == '0' || tab->flags == '-')
			tmp = ft_aff_flags(tmp, tab);
	}
	tab->aff = ft_strdup(tmp);
	tab->length += ft_strlen(tmp);
	if (ft_strlen(tmp) == 0)
		tab->length++;
	free(tmp);
	return (tab);
}

char	*ft_aff_prec_char(char *tmp, t_print *tab)
{
	char	*cpy;
	int		i;

	cpy = (char *)malloc(sizeof(char) * (tab->prec + 1));
	if (!cpy)
		return (NULL);
	i = tab->prec;
	cpy[i] = 0;
	cpy[--i] = tmp[0];
	while (i >= 0)
		cpy[i--] = '0';
	free(tmp);
	return (cpy);
}
