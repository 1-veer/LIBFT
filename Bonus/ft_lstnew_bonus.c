/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayoub-bg <ayoub-bg@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 23:11:24 by abougati          #+#    #+#             */
/*   Updated: 2024/10/25 12:02:57 by ayoub-bg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list *ft_lstnew(void *content)
{
  t_list *new_lst;
  
  new_lst = (t_list *)malloc(sizeof(t_list));
  if(!new_lst)
    return (NULL);

    new_lst->content=content;
    new_lst->next=NULL;

    return (new_lst);
}

    