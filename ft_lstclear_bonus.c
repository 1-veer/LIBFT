/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abougati <abougati@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 23:11:11 by abougati          #+#    #+#             */
/*   Updated: 2024/10/26 15:22:16 by abougati         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*current;
	t_list	*next_current;

	if (!lst || !del)
		return ;
	current = *lst;
	while (current != NULL)
	{
		next_current = current->next;
		ft_lstdelone(current, del);
		current = next_current;
	}
	*lst = NULL;
}
