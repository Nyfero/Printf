/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_flags.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsap <gsap@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/12 14:36:33 by gsap              #+#    #+#             */
/*   Updated: 2021/07/14 12:50:13 by gsap             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

char	*ft_minus_flags(char *tmp, t_print *tab)
{
	char	*cpy;
	int		i;
	int		j;

	i = 0;
	j = 0;
	cpy = ft_strdup(tmp);
	if (!cpy)
		return (NULL);
	while (tmp[i] == ' ')
		i++;
	if (tab->bonus == ' ' && tab->aff[0] != '-')
		i--;
	while (tmp[i])
		cpy[j++] = tmp[i++];
	while (cpy[j])
		cpy[j++] = ' ';
	free(tmp);
	return (cpy);
}

char	*ft_pos_or_space_flags(char *tmp, t_print *tab)
{
	if (tab->bonus == '+')
		return (ft_strjoin_and_free_s2("+", tmp));
	else if (tab->bonus == ' ')
		return (ft_strjoin_and_free_s2(" ", tmp));
	return (NULL);
}

char	*ft_hashtag_flags(char *tmp, t_print *tab)
{
	if (tab->spec == 'x')
		return (ft_strjoin_and_free_s2("0x", tmp));
	else if (tab->spec == 'X')
		return (ft_strjoin_and_free_s2("0X", tmp));
	return (NULL);
}

char	*ft_zero_flags(char *tmp)
{
	char	*cpy;
	int		i;

	i = 0;
	cpy = ft_strdup(tmp);
	if (!cpy)
		return (NULL);
	while (cpy[i] == ' ')
		cpy[i++] = '0';
	free(tmp);
	return (cpy);
}
