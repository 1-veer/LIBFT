/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayoub-bg <ayoub-bg@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 23:09:36 by abougati          #+#    #+#             */
/*   Updated: 2024/11/02 17:53:09 by ayoub-bg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int num_length(int n)
{
    int len;
    len=0;
    if(n==0)
        return 1;

    if(n<0)
        len++;
    while(n!=0)
    {
        len++;
        n=n/10;
    }

    return len;
}

char * ft_itoa(int n)
{
    long number;
    int len;
    char *str;

    number=n;
    len=num_length(n);
    str=malloc(sizeof(char)*(len + 1));
        if(!str)
        return NULL;

    str[len--]='\0';      // terminating the string with NULL then len--;

    if(number<0)
    {
        str[0]='-';     //if the number is negative the we fill its first index with '-';
        number*=-1;
    }
                                                //filling the str with digits from the number backwards from last index to 0;
    while(len >=0 && str[len]!='-')         //The  str[len]!='-' is needed so we don't overwrite over the written '-' in str[0] when the num is negative , but incase it's positive , we go through the str[len=0] since it's still empty to write our digit (first digit if the num).
    {
        str[len--]=number % 10 + '0';
        number/=10;
    }

    return (str);
}

