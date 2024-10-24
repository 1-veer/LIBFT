/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abougati <abougati@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 23:07:55 by abougati          #+#    #+#             */
/*   Updated: 2024/10/24 15:47:18 by abougati         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	char		*d1;
	const char	*s1 = src;

	d1 = dest;
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

int	main(void)
{
	int i;

	char dest[4];
	const char src[4] = "abcd";

	ft_memmove(dest, src, 3);

	for (i = 0; i < 4; i++)
		printf("%c", src[i]);

	printf("\n");

	for (i = 0; i < 4; i++)
		printf("%c", dest[i]);
}