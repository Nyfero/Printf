/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libftprintf.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsap <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/20 14:26:57 by gsap              #+#    #+#             */
/*   Updated: 2021/06/23 16:38:06 by gsap             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRINTF_H
# define PRINTF_H

# include "libft/libft.h"

int		ft_printf(const char *format, ...);
int		ft_all_check(const char *format, int i, char *info_aff);
int		ft_check_flags(const char *format, int i, char *info_aff);
void	ft_l_flags_init(char *info_aff);
void	ft_0_flags_init(char *info_aff);
void	ft_no_flags_init(char *info_aff);
int		ft_check_width(const char *format, int i, char *info_aff);
int		ft_check_precision(const char *format, int i, char *info_aff);
int		ft_check_specifier(const char *format, int i, char *info_aff);
void	ft_putnbr_base_hexa(int nbr, char *c);

#endif
