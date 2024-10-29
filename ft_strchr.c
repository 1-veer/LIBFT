/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abougati <abougati@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 23:08:08 by abougati          #+#    #+#             */
/*   Updated: 2024/10/24 15:48:51 by abougati         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)			// i should put an if (c == '\0') and return (null pointer directly without it going thro the loop first);
{
	if(c == '\0')
		return (NULL);

	while (*s)
	{
		if (*s == (char)c)
			return ((char *)s);
		s++;
	}

	if (c == '\0')
		return ((char *)s);

	return (NULL);
}