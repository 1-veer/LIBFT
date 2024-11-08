/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abougati <abougati@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 23:07:55 by abougati          #+#    #+#             */
/*   Updated: 2024/11/08 19:03:09 by abougati         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char	*d1;
	unsigned char	*s1;
	
	s1 = (unsigned char*)src;
	d1 = (unsigned char*)dest;
	
	if((s1==d1) || n==0 )
		return (dest);
		
	if (s1 > d1)
	{
		while (n--)
			*d1++ = *s1++;
	}
	else
	{
		s1 += n - 1;
		d1 += n - 1;
		while (n--)
		{
			*d1-- = *s1--;
		}
	}
	return ((void *)dest);
}

// int	main(void)
// {
// 	// int i;

// 	// char dest[4];
// 	char *src = "abcd";

// 	printf("%s", ft_memmove(src , src ,2));
// 	return 0;
// }