/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abougati <abougati@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 23:07:50 by abougati          #+#    #+#             */
/*   Updated: 2024/10/24 15:47:08 by abougati         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	char		*p1;
	const char	*p2 = src;

	p1 = dest;
	while (n-- > 0)
	{
		*p1++ = *p2++;
	}
	return (dest);
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
