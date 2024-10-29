/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abougati <abougati@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 23:10:35 by abougati          #+#    #+#             */
/*   Updated: 2024/10/29 22:36:10 by abougati         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char * ft_substr(char const *s, unsigned int start, size_t len)
{
    if(!s || len == 0)
    return NULL;
    
    char *substr;

    substr = malloc(sizeof(char)*(len + 1));
        if(!substr)                    //we can check also if s is valide (!s) so we won't result any errors if 's' is a NULL pointer
            return NULL;

    size_t i = 0;

    while(i<len && s[start])
    {
        substr[i]=s[start];
        i++;
        start++;
    }

    substr[i]='\0';
    return (substr);
}

// int main ()
// {
//     char *s = "AYOUB";
//     printf("%s", ft_substr(s,0,5));
//     return 0;
// }