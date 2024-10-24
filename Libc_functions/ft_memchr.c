/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abougati <abougati@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 23:07:41 by abougati          #+#    #+#             */
/*   Updated: 2024/10/24 15:46:27 by abougati         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
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


