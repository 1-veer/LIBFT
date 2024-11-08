/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abougati <abougati@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 23:08:08 by abougati          #+#    #+#             */
/*   Updated: 2024/11/08 18:36:56 by abougati         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)			
{
	while (*s)
	{
		if (*s == (char)c)
			return ((char *)s);
		s++;
	}

	if ((char)c == '\0')
		return ((char *)s);

	return (NULL);
}