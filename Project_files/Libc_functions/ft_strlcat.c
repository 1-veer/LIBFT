/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abougati <abougati@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 23:08:41 by abougati          #+#    #+#             */
/*   Updated: 2024/10/23 23:08:42 by abougati         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	*ft_strlcat(char *dst, const char *src, unsigned int size)
{
	int dst_len = 0, src_len = 0, i = 0;

	while (dst[dst_len])
		dst_len++;
	while (src[src_len])
		src_len++;

	if (size < dst_len || size == 0)
		return (src_len + size);

	while (src[i] && (dst_len + i) < size - 1)
	{
		dst[dst_len + i] = src[i];
		i++;
	}
	dst[dst_len + i] = '\0';

	return (src_len + dst_len);
}