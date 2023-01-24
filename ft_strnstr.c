/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkorkmaz <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/19 17:53:52 by nkorkmaz          #+#    #+#             */
/*   Updated: 2022/10/19 17:55:46 by nkorkmaz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	nlen;

	i = 0;
	nlen = ft_strlen(needle);
	if (!nlen)
		return ((char *)haystack);
	while (haystack[i] && nlen <= len)
	{
		if (ft_strncmp(&haystack[i], needle, nlen) == 0)
			return ((char *)&haystack[i]);
		i++;
		len--;
	}
	return (0);
}
