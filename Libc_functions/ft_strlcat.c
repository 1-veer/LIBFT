/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abougati <abougati@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 23:08:41 by abougati          #+#    #+#             */
/*   Updated: 2024/10/26 23:27:04 by abougati         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t strlcat(char * restrict dst, const char * restrict src, size_t dstsize)
{
	size_t dst_len = 0, src_len = 0, i = 0;

	while (dst[dst_len])
		dst_len++;
	while (src[src_len])
		src_len++;

	if (dstsize < dst_len || dstsize == 0)
		return (src_len + dstsize);

	while (src[i] && (dst_len + i) < dstsize - 1)
	{
		dst[dst_len + i] = src[i];
		i++;
	}
	dst[dst_len + i] = '\0';

	return (src_len + dst_len);
}