/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abougati <abougati@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 23:07:41 by abougati          #+#    #+#             */
/*   Updated: 2024/10/23 23:07:42 by abougati         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	*memchr(const void *s, int c, size_t n)
{
	const unsigned char	*my_s = (const unsigned char *)s;
	unsigned char		my_c;

	my_c = (unsigned char)c;
	while (n--)
	{
		if (*my_s == my_c)
			return ((void *)my_s);
		my_s++;
	}
	return (0);
}

// int main ()
// {void *memchr(const void *s, int c, size_t n)
// {
//     while (n--)
//     {
//         if(*s==c)
//             return (s);
//         s++;
//     }
//     return (0);
// }
//     int i;

//     char buff[4];

//     ft_memchr( buff , 'a' , sizeof(char)*2);
//     ft_memchr( buff+2 , 'b' , sizeof(char)*2);

//     for(i=0 ; i<4 ; i++)
//         printf("%c" , buff[i]);
// }
