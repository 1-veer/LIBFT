/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abougati <abougati@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 23:08:46 by abougati          #+#    #+#             */
/*   Updated: 2024/10/23 23:08:47 by abougati         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

size_t	strlcpy(char *dst, const char *src, size_t size)
{
	size_t	i;

	if (!src || !dst)
		return (0);
	if (size == 0)
		return (ft_strlen(src));
	i = 0;
	while (src[i] && i < (size - 1)) // the -1 is for the null teminator
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (ft_strlen(src));
}
