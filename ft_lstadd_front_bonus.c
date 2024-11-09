/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front_bonus.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abougati <abougati@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 23:11:05 by abougati          #+#    #+#             */
/*   Updated: 2024/11/09 22:25:09 by abougati         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void ft_lstadd_front(t_list **lst, t_list *new)
{
    if (!lst || !new )
        return ;

    new->next = *lst;   //assigne the the new_node's next(pointer) to point to the old head of the linked list
    *lst = new ;         // assigning the head to point to new now , so new is the head  
                        // N.B : head == the first link of a list.
                                 //since new is just a pointer to a node not a node itself. 
}


// int main(void)
// {
//     // Initialize an empty list (head pointer set to NULL)
//     t_list *head = NULL;

//     // Create new nodes with some example values
//     t_list *node1 = (t_list *)malloc(sizeof(t_list));
//     t_list *node2 = (t_list *)malloc(sizeof(t_list));
//     t_list *node3 = (t_list *)malloc(sizeof(t_list));

//     if (!node1 || !node2 || !node3) // Check for allocation errors
//     {
//         perror("Failed to allocate memory");
//         return (1);
//     }

//     // Initialize node content and next pointers
//     node1->content = "Node 1";
//     node1->next = NULL;
//     node2->content = "Node 2";
//     node2->next = NULL;
//     node3->content = "Node 3";
//     node3->next = NULL;

//     // Add nodes to the front of the list
//     ft_lstadd_front(&head, node1);
//     ft_lstadd_front(&head, node2);
//     ft_lstadd_front(&head, node3);

//     // Print the addresses and contents of the nodes in the list
//     t_list *current = head;
//     int i = 1;
//     while (current != NULL)
//     {
//         printf("Node %d address: %p, content: %s, next: %p\n", i, (void *)current, (char *)current->content, (void *)current->next);
//         current = current->next;
//         i++;
//     }

//     // Free allocated memory
//     free(node1);
//     free(node2);
//     free(node3);

//     return (0);
// }
