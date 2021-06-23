/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_width.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsap <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/21 12:09:25 by gsap              #+#    #+#             */
/*   Updated: 2021/06/23 16:35:28 by gsap             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

int	ft_check_width(const char *format, int i, char *info_aff)
{
	int		res;
	char	*tmp;

	res = 0;
	while (ft_isdigit(format[i]) == 1)
	{
		res = (res * 10) + (format[i] + 48);
		i++;
	}
	tmp = ft_strjoin(ft_itoa(res), ",");
	if (!tmp)
		return (NULL);
	info_aff = ft_strjoin_and_free(info_aff, tmp);
	if (!info_aff)
		return (NULL);
	free(tmp);
	return (i);
}
