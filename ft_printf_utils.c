/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_utils.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsap <gsap@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/27 17:46:12 by gsap              #+#    #+#             */
/*   Updated: 2021/06/30 15:12:16 by gsap             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

t_print	*ft_init_print(t_print *tab)
{
	if (!tab)
	{
		tab = (t_print *)malloc(sizeof(t_print));
		tab->length = 0;
		tab->spec = 0;
	}
	if (!tab)
		return (NULL);
	if (tab->spec != 0)
		free(tab->aff);
	tab->flags = 0;
	tab->width = 0;
	tab->prec = -1;
	tab->spec = 0;
	tab->count = 0;
	tab->aff = 0;
	tab->afchar = 0;
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
