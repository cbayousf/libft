/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbayousf <cbayousf@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 13:21:35 by cbayousf          #+#    #+#             */
/*   Updated: 2024/11/14 15:16:14 by cbayousf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t					i;
	const unsigned char		*source;
	unsigned char			*dest;

	i = 0;
	if (!dst && !src)
		return (NULL);
	source = (const unsigned char *)src;
	dest = (unsigned char *)dst;
	while (i < n)
	{
		dest[i] = source[i];
		i++;
	}
	return (dst);
}
