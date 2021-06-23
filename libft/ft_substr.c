/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsap <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/21 16:28:16 by gsap              #+#    #+#             */
/*   Updated: 2021/05/27 11:58:02 by gsap             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_le_bon_malloc(char const *s, size_t len)
{
	char	*tmp;

	if (ft_strlen(s) > len)
		tmp = malloc(sizeof(char) * (len + 1));
	else
		tmp = malloc(sizeof(char) * (ft_strlen(s) + 1));
	if (!tmp)
		return (NULL);
	return (tmp);
}

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*str;
	size_t	i;

	if (!s)
		return (NULL);
	if (start < ft_strlen(s))
	{
		str = ft_le_bon_malloc(s, len);
		if (!str)
			return (NULL);
		i = 0;
		while (s[start] && len)
		{
			str[i++] = s[start++];
			len--;
		}
		str[i] = '\0';
	}
	else
	{
		str = (char *)malloc(sizeof(char *) * 1);
		str[0] = 0;
	}
	return (str);
}
