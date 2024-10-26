/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abougati <abougati@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 23:11:24 by abougati          #+#    #+#             */
/*   Updated: 2024/10/26 12:48:09 by abougati         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list *ft_lstnew(void *content)
{
  t_list *new_lst;
  
  new_lst = (t_list *)malloc(sizeof(t_list));
  if(!new_lst)
    return (NULL);

    new_lst->content=content;   // -> is used to access the parameters of the node pointing to by new_lst; 
    new_lst->next=NULL;

    return (new_lst);
}

    