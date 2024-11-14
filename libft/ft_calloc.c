/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbayousf <cbayousf@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/26 12:44:40 by cbayousf          #+#    #+#             */
/*   Updated: 2024/11/12 20:25:45 by cbayousf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*str;
	size_t	i;

	i = 0;
	str = malloc(count * size);
	if (str == NULL)
	{
		return (NULL);
	}
	ft_bzero(str, count * size);
	return (str);
}
