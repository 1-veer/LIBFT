/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abougati <abougati@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 23:07:46 by abougati          #+#    #+#             */
/*   Updated: 2024/10/24 15:46:49 by abougati         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char *str1 = s1;
	unsigned char *str2 = s2;

	size_t i;
	i = 0;

	while (i < n) // ('\0') do  signify the end of a string,they can appear anywhere in memory,so even if both are indexing on a null,it doesn't mean we compared the whole 2 strings , yet there may be more to compare, so the condition we need is i < n;
	{
		if (str1[i] != str2[i])
			return ((unsigned char)str1[i] - (unsigned char)str2[i]);
		i++;
	}
	return (0);
}