/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_utils_2.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsap <gsap@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/28 17:22:59 by gsap              #+#    #+#             */
/*   Updated: 2021/07/01 14:09:50 by gsap             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putstr_printf(char *s, t_print *tab)
{
	int	i;
	char c;

	c = 0;
	i = 0;
	if (tab->spec == 'c' && tab->afchar == 0)
		write(1, &c, 1);
	while (s[i])
		ft_putchar(s[i++]);
}

char	*ft_strdup_printf(const char *s1)
{
	char	*dest;
	size_t	i;

	if (!s1)
	{
		dest = ft_calloc(1, 1);
		if (!dest)
			return (NULL);
		dest[0] = 0;
		return (dest);
	}
	dest = ft_calloc((ft_strlen(s1) + 1), 1);
	if (!dest)
		return (NULL);
	i = 0;
	while (s1[i])
	{
		dest[i] = s1[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
