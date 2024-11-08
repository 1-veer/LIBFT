/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abougati <abougati@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 23:10:13 by abougati          #+#    #+#             */
/*   Updated: 2024/11/08 18:21:55 by abougati         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char * ft_strjoin(char const *s1, char const*s2)
{ 
    char *res;
    size_t len=ft_strlen(s1)+ft_strlen(s2);
    
    if(!s1 || !s2)
    return NULL;
   
    res = malloc(sizeof(char)*(len + 1));
    if(!res)
        return NULL;

    char *pointer_to_res = res;

    while (*s1)
        *res++=*s1++;

    while (*s2)
        *res++=*s2++;

    *res = '\0';

    return (pointer_to_res);
}

// int main ()
// {
//     char *s1="Ayoub ";
//     char *s2="Bougatia";
//     char *res=ft_strjoin(s1,s2);

//     printf("%s",res);
//     return 0;
// }