/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsap <gsap@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/20 14:26:57 by gsap              #+#    #+#             */
/*   Updated: 2021/07/14 13:13:48 by gsap             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include "libft/libft.h"
# include <stdio.h>
# include <stdarg.h>

typedef struct s_print
{
	va_list	args;
	char	flags;
	char	bonus;
	int		width;
	int		prec;
	char	spec;
	int		count;
	int		length;
	char	*aff;
	char	afchar;
}	t_print;

int		ft_printf(const char *format, ...);
t_print	*ft_init_print(t_print *tab);

t_print	*ft_all_check(const char *format, int i, t_print *tab);
t_print	*ft_check_flags(const char *format, int i, t_print *tab);
t_print	*ft_check_width(const char *format, int i, t_print *tab);
t_print	*ft_check_precision(const char *format, int i, t_print *tab);
t_print	*ft_check_spec(t_print *tab);

t_print	*ft_put_format(t_print *tab);
char	*ft_aff_flags(char *tmp, t_print *tab);
char	*ft_aff_width(char *tmp, t_print *tab);
char	*ft_aff_prec(char *tmp, t_print *tab);

char	*ft_minus_flags(char *tmp, t_print *tab);
char	*ft_pos_or_space_flags(char *tmp, t_print *tab);
char	*ft_hashtag_flags(char *tmp, t_print *tab);
char	*ft_zero_flags(char *tmp);

t_print	*ft_aff_char(t_print *tab);
char	*ft_aff_prec_char(char *tmp, t_print *tab);
void	ft_putstr_printf(char *s, t_print *tab);

t_print	*ft_aff_str(t_print *tab);
char	*ft_aff_prec_str(char *tmp, t_print *tab);
char	*ft_strdup_printf(const char *s1);

t_print	*ft_aff_point(t_print *tab);
t_print	*ft_aff_uint(t_print *tab);

t_print	*ft_aff_int(t_print *tab);
char	*ft_aff_prec_int(char *tmp, t_print *tab);
char	*ft_aff_prec_int_neg(char *tmp, t_print *tab);
char	*ft_aff_prec_int_null(char *tmp);
char	*ft_aff_flags_int(char *tmp, t_print *tab);

t_print	*ft_aff_hexa(t_print *tab);
int		ft_lenght_nbr(int nb);
int		ft_lenght_unbr(unsigned long int nb);
char	*ft_to_hexa(unsigned long int nbr, char c);
char	*ft_reverse_tab(char *tab, int i);

#endif
