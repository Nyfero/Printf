/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_int.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsap <gsap@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/30 15:28:15 by gsap              #+#    #+#             */
/*   Updated: 2021/07/14 12:50:01 by gsap             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

t_print	*ft_aff_int(t_print *tab)
{
	char	*tmp;

	tmp = ft_strdup(tab->aff);
	if (!tmp)
		return (NULL);
	if (tab->prec >= (int)ft_strlen(tmp) || (tmp[0] == '0' && tab->prec == 0))
		tmp = ft_aff_prec_int(tmp, tab);
	if ((tab->bonus == '+' || tab->bonus == ' ') && tab->aff[0] != '-')
		tmp = ft_pos_or_space_flags(tmp, tab);
	if (tab->width > (int)ft_strlen(tmp))
	{
		tmp = ft_aff_width(tmp, tab);
		if (tab->flags != '0' && tab->flags != 'x')
			tmp = ft_aff_flags(tmp, tab);
		else if (tab->flags == '0' && tab->prec < 0)
			tmp = ft_aff_flags_int(tmp, tab);
	}
	if (tab->aff[0])
		free(tab->aff);
	tab->aff = ft_strdup(tmp);
	tab->length += ft_strlen(tmp);
	free(tmp);
	return (tab);
}

char	*ft_aff_prec_int(char *tmp, t_print *tab)
{
	char	*cpy;
	int		i;
	int		j;

	if (tmp[0] == '0' && tab->prec == 0)
		return (ft_aff_prec_int_null(tmp));
	if (tmp[0] == '-')
		return (ft_aff_prec_int_neg(tmp, tab));
	cpy = (char *)malloc(sizeof(char) * (tab->prec + 1));
	if (!cpy)
		return (NULL);
	i = tab->prec;
	j = ft_strlen(tmp);
	cpy[i] = 0;
	while (j >= 0)
		cpy[i--] = tmp[j--];
	while (i >= 0)
		cpy[i--] = '0';
	free(tmp);
	return (cpy);
}

char	*ft_aff_prec_int_null(char *tmp)
{
	char	*cpy;

	cpy = ft_strdup("");
	if (!cpy)
		return (NULL);
	free(tmp);
	return (cpy);
}

char	*ft_aff_prec_int_neg(char *tmp, t_print *tab)
{
	char	*cpy;
	int		i;
	int		j;

	tab->prec++;
	cpy = (char *)malloc(sizeof(char) * (tab->prec + 1));
	if (!cpy)
		return (NULL);
	i = tab->prec;
	j = ft_strlen(tmp) + 1;
	cpy[i] = 0;
	while (--j > 0)
	{
		if (tmp[j] == '-')
			cpy[i--] = '0';
		else
			cpy[i--] = tmp[j];
	}
	while (i > 0)
		cpy[i--] = '0';
	cpy[0] = '-';
	free(tmp);
	return (cpy);
}

char	*ft_aff_flags_int(char *tmp, t_print *tab)
{
	char	*cpy;
	int		i;

	cpy = ft_strdup(tmp);
	if (!cpy)
		return (NULL);
	i = 0;
	if (tab->aff[0] == '-')
		cpy[i++] = '-';
	else if (tab->bonus == '+')
		cpy[i++] = '+';
	while (cpy[i] == ' ')
		cpy[i++] = '0';
	if (tab->aff[0] == '-' || tab->bonus == '+')
		cpy[i] = '0';
	free(tmp);
	return (cpy);
}
