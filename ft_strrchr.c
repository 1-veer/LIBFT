/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abougati <abougati@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 23:09:08 by abougati          #+#    #+#             */
/*   Updated: 2024/11/05 19:37:21 by abougati         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include "libft.h"

// char	*ft_strrchr(const char *s, int c)
// {
// 	int	i;

// 	i=0;
// 	while (s[i])
// 		i++;
// 	s += i;
// 	if ((char)c == '\0')
// 		return ((char *)s);  // return s pointing on null , cuz s is on the null terminator atm
// 	while (i-- >= 0)
// 	{
// 		s--;
// 		if (*s == (char)c)      //decrement then compare
// 			return ((char *)s);
// 	}
// 	return (NULL);
// }

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	const char *last_occurrence = NULL;

	// Traverse the string
	while (*s)
	{
		if (*s == (char)c)
			last_occurrence = s; // Update last occurrence whenever c is found
		s++;
	}

	// If c is '\0', return a pointer to the null terminator
	if ((char)c == '\0')
		return ((char *)s);

	// Return last occurrence of c, or NULL if not found
	return ((char *)last_occurrence);
}