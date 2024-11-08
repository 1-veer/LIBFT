/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abougati <abougati@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 23:07:59 by abougati          #+#    #+#             */
/*   Updated: 2024/11/08 18:53:47 by abougati         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *dest, int c, size_t n)
{
	unsigned char	*pointer;       //for a byte by byte setting

	pointer = dest;
	while (n > 0)
	{
		*pointer = (unsigned char)c;
		pointer++;
		n--;
	}
	return (dest);
}

int main ()
{
    int i;

    char buff[4];

    ft_memset( buff , 'a' , sizeof(char)*2);
    ft_memset( buff+2 , 'b' , sizeof(char)*2);

    for(i=0 ; i<4 ; i++)
        printf("%c" , buff[i]);

    printf("\n");

    printf ("%s" , ft_memset(buff , 'x', 4));
}