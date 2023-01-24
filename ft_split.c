/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkorkmaz <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/24 12:33:12 by nkorkmaz          #+#    #+#             */
/*   Updated: 2022/10/25 10:39:41 by nkorkmaz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

size_t	ft_slen(char const *s, char c)
{
	size_t	i;
	size_t	klm;

	i = 0;
	klm = 0;
	while (s[i] == c && s[i])
		i++;
	while (s[i])
	{
		while (s[i] != c && s[i])
			i++;
		klm++;
		while (s[i] == c && s[i])
			i++;
	}
	return (klm);
}

char	*ft_strcreate(const char *s, char c, size_t i)
{
	size_t	len;
	size_t	tmp;

	len = 0;
	tmp = i;
	while (s[tmp] != c && s[tmp])
	{
		tmp++;
		len++;
	}
	return (ft_substr(s, i, len));
}

char	**ft_split(char const *s, char c)
{
	size_t	i;
	size_t	res_i;
	char	**res;

	if (!s)
		return (NULL);
	res = (char **)malloc((ft_slen(s, c) + 1) * sizeof(char *));
	if (!res)
		return (NULL);
	i = 0;
	res_i = 0;
	while (s[i])
	{
		while (s[i] == c && s[i])
			i++;
		if (s[i])
		{
			res[res_i] = ft_strcreate(s, c, i);
			res_i++;
		}
		while (s[i] != c && s[i])
			i++;
	}
	res[res_i] = 0;
	return (res);
}
