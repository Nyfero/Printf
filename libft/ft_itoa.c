/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsap <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/21 10:46:09 by gsap              #+#    #+#             */
/*   Updated: 2021/05/27 14:49:20 by gsap             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	taille_tab(size_t nbr)
{
	size_t	compt;

	compt = 1;
	while (nbr / 10 > 0)
	{
		nbr = nbr / 10;
		compt++;
	}
	return (compt);
}

void	positif(char *str, int i, long int nb)
{
	while (i >= 0)
	{
		str[i] = (nb % 10) + 48;
		nb = (nb / 10);
		i--;
	}
}

void	negatif(char *str, int i, long int nb)
{
	while (i > 0)
	{
		str[i] = (nb % 10) + 48;
		nb = (nb / 10);
		i--;
	}
	str[0] = '-';
}

char	*ft_itoa(int n)
{
	long int	nb;
	size_t		i;
	char		*str;

	nb = n;
	i = 0;
	if (n < 0)
		i++;
	if (n < 0)
		nb *= -1;
	i += taille_tab(nb);
	str = (char *)malloc(sizeof(char) * i + 1);
	if (str == 0)
		return (NULL);
	str[i] = '\0';
	i--;
	if (n >= 0)
		positif(str, i, nb);
	else
		negatif(str, i, nb);
	return (str);
}
