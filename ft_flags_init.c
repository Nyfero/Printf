/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_flags_init.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsap <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/21 12:42:25 by gsap              #+#    #+#             */
/*   Updated: 2021/06/23 16:35:46 by gsap             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

void	ft_l_flags_init(char *info_aff)
{
	info_aff = ft_strjoin_and_free(info_aff, "-,");
	if (!info_aff)
		return (NULL);
}

void	ft_0_flags_init(char *info_aff)
{
	info_aff = ft_strjoin_and_free(info_aff, "0,");
	if (!info_aff)
		return (NULL);
}

void	ft_no_flags_init(char *info_aff)
{
	info_aff = ft_strjoin_and_free(info_aff, "n,");
	if (!info_aff)
		return (NULL);
}
