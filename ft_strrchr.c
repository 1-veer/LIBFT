/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abougati <abougati@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 23:09:08 by abougati          #+#    #+#             */
/*   Updated: 2024/11/05 12:58:33 by abougati         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	i;

	i=0;
	while (s[i])
		i++;
	s += i;
	if (c == '\0')
		return ((char *)s);  // return s pointing on null , cuz s is on the null terminator atm
	while (i-- >= 0)
	{
		if (*--s == (char)c)      //decrement then compare
			return ((char *)s);
	}
	if ((char)c == '\0')
		return ((char *)s);	
	
	return (NULL);
}

