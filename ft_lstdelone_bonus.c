/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone_bonus.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abougati <abougati@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 23:11:13 by abougati          #+#    #+#             */
/*   Updated: 2024/10/26 14:57:25 by abougati         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void ft_lstdelone(t_list *lst, void (*del)(void*))
{
    if(!lst || !del)
        return;
        
       del(lst->content);
       free(lst); //after deleting its content , we free the lst itself as a good practice even tho its next pointer still hold the same thing but we can't access it (derefrence it) anymore.
}