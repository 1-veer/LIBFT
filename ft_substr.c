/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abougati <abougati@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 23:10:35 by abougati          #+#    #+#             */
/*   Updated: 2024/11/05 13:03:02 by abougati         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char * ft_substr(char const *s, unsigned int start, size_t len)
{   
    char *substr;
    size_t i;

    if(!s)
    return NULL;
    
    if(start>ft_strlen(s))
        return ft_calloc(1,sizeof(char));
        
    if (len + start > ft_strlen(s))  // Adjust len to not exceed the string length
        len = ft_strlen(s) - start;    
   
    substr = malloc(sizeof(char)*(len + 1));
        if(!substr)                    //we can check also if s is valide (!s) so we won't result any errors if 's' is a NULL pointer
            return NULL;
    i = 0;
    while(i<len && s[start])
    {
        substr[i]=s[start];
        i++;
        start++;
    }

    substr[i]='\0';
    return (substr);
}
