/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abougati <abougati@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 23:09:02 by abougati          #+#    #+#             */
/*   Updated: 2024/10/30 11:26:49 by abougati         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char  *ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i,j;
	i = 0;
	
	if (needle[0] == '\0')
		return ((char *)haystack);    //type casting to return a (char *) as required
	while (haystack[i])
	{
		j = 0;    // reset j to 0
		while (haystack[i + j] && haystack[i + j] == needle[j] && (i+j) < len)
			j++;
		if (needle[j] == '\0')
			return ((char *)&haystack[i]);
		i++;
	}
	return (0);
}

// int	main(void)
// {
// 	char *s1 = "ayoabub";
// 	char *s2 = "ab";
// 	printf("%s", ft_strnstr(s1, s2, 5));
// 	return (0);
// }
