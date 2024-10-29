/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abougati <abougati@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 23:09:02 by abougati          #+#    #+#             */
/*   Updated: 2024/10/24 15:52:16 by abougati         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(char *haystack, char *needle, int len)
{
	int	i;
	int	j;
	i = 0, j = 0;

	if (needle[0] == '\0')
		return (haystack);
	while (haystack[i])
	{
		while (haystack[i + j] && haystack[i + j] == needle[j] && j < len)
			j++;
		if (needle[j] == '\0')
			return (&haystack[i]);
		i++;
	}
	return (0);
}

// int	main(void)
// {
// 	char *s1 = "ayoab4ub";
// 	char *s2 = "ab4";
// 	printf("%s", ft_strnstr(s1, s2, 3));
// 	return (0);
// }