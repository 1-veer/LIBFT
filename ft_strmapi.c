/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abougati <abougati@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 23:10:17 by abougati          #+#    #+#             */
/*   Updated: 2024/10/24 15:59:19 by abougati         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char * ft_strmapi(char const *s, char(*f)(unsigned int, char))
{
    if (!s|| !f)
        return NULL;

    unsigned int len,i;
    len=0;

    while (s[len])
        len++;

    char *str=malloc(sizeof(char)*(len+1));
        if(!str)
            return NULL;

    i=0;
        while(i<len)
        {
            str[i]=f(i,s[i]);
            i++;
        }

    str[len]='\0';
        return (str);
}