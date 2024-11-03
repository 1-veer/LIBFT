/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abougati <abougati@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 23:11:26 by abougati          #+#    #+#             */
/*   Updated: 2024/10/26 12:56:48 by abougati         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_lstsize(t_list *lst)
{
    if(!lst)
        return (0);
    
    int count;
    t_list* current;
    
    count=0;
    current=lst;
    
    while (current!= NULL)
    {
        count++;
        current=current->next;      //current points to the next node.
    }
    
    return (count) ;       
}
