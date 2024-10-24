/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abougati <abougati@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 23:09:49 by abougati          #+#    #+#             */
/*   Updated: 2024/10/24 15:58:46 by abougati         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void put(char c , int fd)
{
    write ( fd , &c , 1);
}

void ft_putnbr_fd(int n , int fd)
{
    unsigned int nbr ;
    
    if (n<0)
    {
        put('-' , fd);
        nbr=-n;
    }
    else 
        nbr=n;

    if ( nbr < 10)
        put(nbr+ '0' , fd);  //'0' is equal to 48 in terms of ASCII

    else 
    {
        ft_putnbr_fd(nbr/10 , fd);
        ft_putnbr_fd(nbr%10 , fd);
    }
}

// int main ()
// {
//     ft_putnbr_fd(10 , 1);
//     return 0;
// }