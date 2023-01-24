/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkorkmaz <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/12 10:30:44 by nkorkmaz          #+#    #+#             */
/*   Updated: 2022/10/12 11:11:21 by nkorkmaz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t len)
{
	if (!dest && !src)
		return (NULL);
	if (dest < src)
		ft_memcpy(dest, src, len);
	if (dest > src)
	{
		while (len--)
		{
			*((unsigned char *)(dest + len)) = *((unsigned char *)(src + len));
		}
	}
	return (dest);
}
