/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_format.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsap <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/23 13:31:36 by gsap              #+#    #+#             */
/*   Updated: 2021/06/23 16:36:17 by gsap             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

char	*ft_format_aff(const char *format, int i, char *info_aff)
{

}

void	ft_putnbr_base_hexa(int nbr, char *c)
{
	long int	tmp;
	char		*base_hexa;

	tmp = nbr;
	if (c == 'x')
		base_hexa = "0123456789abcdef";
	else
		base_hexa = "0123456789ABCDEF";
	if (tmp < 0)
	{
		ft_putchar('-');
		tmp *= -1;
	}
	if (tmp >= 16)
		ft_putnbr_base_hexa(tmp / 16, c);
	ft_putchar(base_hexa[tmp % 16]);
}
