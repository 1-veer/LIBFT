/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abougati <abougati@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 23:07:50 by abougati          #+#    #+#             */
/*   Updated: 2024/11/11 17:23:38 by abougati         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char	*p1;
	unsigned char	*p2;

	if (dest == src || n == 0)
		return (dest);
	p1 = (unsigned char *)dest;
	p2 = (unsigned char *)src;
	while (n-- > 0)
	{
		*p1++ = *p2++;
	}
	return (dest);
}
