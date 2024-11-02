/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayoub-bg <ayoub-bg@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 23:07:50 by abougati          #+#    #+#             */
/*   Updated: 2024/11/02 19:50:44 by ayoub-bg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	if(dest == src || n==0)
	return (dest);
	unsigned char	*p1;
	unsigned char	*p2;

	p1 = (unsigned char*)dest;
	p2=  (unsigned char*)src;
	while (n-- > 0)
	{
		*p1++ = *p2++;
	}
	return (dest);//the return as a concpet means
}

// int main ()
// {
//     int i;

//     char dest[4];
//     const char src[4]="abcd";

//     ft_memcpy( dest , src , 2 );

//     for(i=0 ; i<4 ; i++)
//         printf("%c" , src[i]);

//     printf("\n");

//     for(i=0 ; i<4; i++)
//         printf("%c" , dest[i]);

// }
