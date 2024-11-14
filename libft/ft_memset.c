/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbayousf <cbayousf@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 13:21:53 by cbayousf          #+#    #+#             */
/*   Updated: 2024/11/14 18:05:41 by cbayousf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	size_t			i;
	unsigned char	*str;
	unsigned char	k;

	str = (unsigned char *)b;
	k = (unsigned char)c;
	i = 0;
	while (i < len)
	{
		str[i] = k;
		i++;
	}
	return (b);
}
#include <stdio.h>
int main()
{
	char str[20]="chaymae";
	printf("%s",(char *)ft_memset(str,1337,3));
}