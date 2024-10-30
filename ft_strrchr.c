/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abougati <abougati@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 23:09:08 by abougati          #+#    #+#             */
/*   Updated: 2024/10/30 11:29:12 by abougati         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	i;
	
	if(!s)
		return NULL;
	
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
	if (c == '\0')
		return ((char *)s);	
	
	return (NULL);
}


int	main()
{
	const char	*str = "Hello, world!";
	char		ch = 'o';
	char		*result;

	result = ft_strrchr(str, ch);
	if (result)
		printf("Last occurrence of '%c' found at position: %ld\n", ch, result - str);
	else
		printf("Character '%c' not found.\n", ch);



	// Testing with null character
	result = ft_strrchr(str, '\0');
	if (result)
	{
		printf("Null character found at position: %ld\n", result - str);
	}
	
	return (0);
}
