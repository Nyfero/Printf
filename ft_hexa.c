/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hexa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsap <gsap@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/01 17:00:50 by gsap              #+#    #+#             */
/*   Updated: 2021/07/14 13:12:26 by gsap             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

t_print	*ft_aff_hexa(t_print *tab)
{
	char	*tmp;

	tmp = ft_strdup(tab->aff);
	if (!tmp)
		return (NULL);
	if (tab->prec >= (int)ft_strlen(tmp) || (tmp[0] == '0' && tab->prec == 0))
		tmp = ft_aff_prec_int(tmp, tab);
	if (tab->bonus == '#' && tab->aff[0] != '0')
		tmp = ft_hashtag_flags(tmp, tab);
	if (tab->width > (int)ft_strlen(tmp))
	{
		tmp = ft_aff_width(tmp, tab);
		if (tab->flags == '-' || (tab->flags == '0' && tab->prec == -1))
			tmp = ft_aff_flags(tmp, tab);
	}
	free(tab->aff);
	tab->aff = ft_strdup(tmp);
	tab->length += ft_strlen(tmp);
	free(tmp);
	return (tab);
}

int	ft_lenght_nbr(int nb)
{
	long int	c;
	int			compt;

	c = nb;
	compt = 1;
	if (c < 0)
		c *= -1;
	while ((c / 10) > 0)
	{
		compt++;
		c = c / 10;
	}
	return (compt);
}

int	ft_lenght_unbr(unsigned long int nb)
{
	unsigned long int	c;
	int					compt;

	c = nb;
	compt = 1;
	while ((c / 10) > 0)
	{
		compt++;
		c = c / 10;
	}
	return (compt);
}

char	*ft_to_hexa(unsigned long int nbr, char c)
{
	char	*res;
	char	*base_hexa;
	int		i;

	base_hexa = "0123456789abcdef";
	if (c == 'X')
		base_hexa = "0123456789ABCDEF";
	i = 0;
	res = (char *)malloc(sizeof(char) * (ft_lenght_unbr(nbr) + 1));
	if (!res)
		return (NULL);
	while (nbr >= 16)
	{
		res[i] = base_hexa[nbr % 16];
		nbr = nbr / 16;
		i++;
	}
	res[i] = base_hexa[nbr % 16];
	i++;
	res[i] = 0;
	res = ft_reverse_tab(res, (i - 1));
	return (res);
}

char	*ft_reverse_tab(char *tab, int i)
{
	char	*tmp;
	int		j;

	tmp = ft_strdup(tab);
	if (!tmp)
		return (NULL);
	j = 0;
	while (i >= 0)
		tmp[j++] = tab[i--];
	tmp[j] = 0;
	free(tab);
	return (tmp);
}
