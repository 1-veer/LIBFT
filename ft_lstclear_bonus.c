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

void ft_lstclear(t_list **lst, void (*del)(void*))
{
    if(!lst || !del)
        return ;

    t_list *current , *next_current;

    current= *lst;
    
    while(current!=NULL)
    {
        next_current=current->next;      //we save our next node of our current node , because current is gonna be cleared ,in ordre so we don't lose track after deleting it.
        ft_lstdelone(current , del);       //clearing the current
        free(current);
        current=next_current;             //setting the current back to be the next node.
    }
    
    *lst = NULL;   //set the head as null indicating it as an empty list.
}
