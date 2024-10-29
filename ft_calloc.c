/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abougati <abougati@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 23:06:37 by abougati          #+#    #+#             */
/*   Updated: 2024/10/24 15:44:09 by abougati         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	char	*str;
	size_t	total_size;

	total_size = nmemb * size;
	str = malloc(total_size);
	if (!str)
		return (NULL);
	ft_bzero(str, total_size);
	return (str);
}
