/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbayousf <cbayousf@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/08 11:55:42 by cbayousf          #+#    #+#             */
/*   Updated: 2024/11/14 15:13:38 by cbayousf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*org;
	t_list	*next;

	org = *lst;
	while (org)
	{
		next = org->next;
		del(org->content);
		free(org);
		org = next;
	}
	*lst = NULL;
}
