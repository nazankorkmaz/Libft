/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkorkmaz <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/24 12:41:40 by nkorkmaz          #+#    #+#             */
/*   Updated: 2022/10/24 12:43:24 by nkorkmaz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*p;

	if (!s1 || !s2)
		return (0);
	p = (char *)malloc(ft_strlen(s1) + ft_strlen(s2) + 1);
	if (!p)
		return (NULL);
	ft_memcpy(p, s1, ft_strlen(s1));
	ft_memcpy((p + ft_strlen(s1)), s2, ft_strlen(s2));
	p[ft_strlen(s1) + ft_strlen(s2)] = '\0';
	return (p);
}
