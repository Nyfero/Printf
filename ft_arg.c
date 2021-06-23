/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_arg.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsap <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/23 15:28:46 by gsap              #+#    #+#             */
/*   Updated: 2021/06/23 16:34:11 by gsap             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

char	**ft_arg(const char *format)
{
	int		i;
	char	**tab_arg;

	i = 1;
	while (format[i] != '"')
		i++;
	tab_arg = ft_split(&format[i], ',');
	ft_check_tab_arg(tab_arg);
	if (!tab_arg)
		tab_arg[0] = ft_strdup("");
	if (!tab_arg)
		return (NULL);
	return (tab_arg);
}

void	ft_check_tab_arg(char **tab_arg)
{
	int	i;
	int	j;

	i = 0;
	while (tab_arg[i])
	{
		j = 0;
		while (tab_arg[i][j])
		{
			if (tab_arg[i][j] == '"')
			{
				while (tab_arg[i][j] && tab_arg[i][j] != '"')
					j++;
				if (tab_arg[i][j] != '"')
					tab_arg[i] = ft_strjoin_and_free(tab_arg[i], tab_arg[++i]);
				while (tab_arg[i + 1])
				{
					free(tab_arg[i]);
					tab_arg[i] = ft_strdup(tab_arg[i + 1]);
				}
			}
			j++;
		}
		i++;
	}
}
