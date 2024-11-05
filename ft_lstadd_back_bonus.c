/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back_bonus.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abougati <abougati@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 23:11:01 by abougati          #+#    #+#             */
/*   Updated: 2024/11/05 21:08:21 by abougati         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void ft_lstadd_back(t_list **lst, t_list *new)
{
    t_list *temp;   //using a temp so we don't loose the refernce to our head (first link)
    
    if(!lst || !new)
        return ;
 
    //new->next = NULL;  //initialise new->next with null since it'll be the last node anyways

    if (*lst == NULL) 
        *lst = new;  
    else
    {
        temp = ft_lstlast(*lst);  
        temp->next = new; 
    }
}
