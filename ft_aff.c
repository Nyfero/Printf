/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_aff.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsap <gsap@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/27 17:50:51 by gsap              #+#    #+#             */
/*   Updated: 2021/07/01 17:00:13 by gsap             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

t_print	*ft_put_format(t_print *tab)
{
	if (tab->spec == 'c')
		tab = ft_aff_char(tab);
	else if (tab->spec == 's' || tab->spec == '%')
		tab = ft_aff_str(tab);
	else if (tab->spec == 'p')
		tab = ft_aff_point(tab);
	else if (tab->spec == 'd' || tab->spec == 'i')
		tab = ft_aff_int(tab);
	else if (tab->spec == 'u')
		tab = ft_aff_uint(tab);
	else if (tab->spec == 'x' || tab->spec == 'X')
		tab = ft_aff_hexa(tab);
	ft_putstr_printf(tab->aff, tab);
	return (tab);
}

char	*ft_aff_flags(char *tmp, t_print *tab)
{
	char	*cpy;
	int		i;
	int		j;

	cpy = ft_strdup(tmp);
	if (!cpy)
		return (NULL);
	i = 0;
	if (tab->flags == '-')
	{
		while (tmp[i] == ' ')
			i++;
		j = 0;
		while (tmp[i])
			cpy[j++] = tmp[i++];
		while (cpy[j])
			cpy[j++] = ' ';
	}
	else
	{
		while (cpy[i] == ' ')
			cpy[i++] = '0';
	}
	free(tmp);
	return (cpy);
}

char	*ft_aff_width(char *tmp, t_print *tab)
{
	char	*cpy;
	int		i;
	int		j;

	j = tab->width;
	cpy = (char *)malloc(sizeof(char) * (j + 1));
	if (!cpy)
		return (NULL);
	i = ft_strlen(tmp);
	cpy[j] = 0;
	while (i >= 0)
		cpy[j--] = tmp[i--];
	while (j >= 0)
		cpy[j--] = ' ';
	free(tmp);
	return (cpy);
}

char	*ft_aff_prec(char *tmp, t_print *tab)
{
	char	*cpy;
	int		i;
	int		j;

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
