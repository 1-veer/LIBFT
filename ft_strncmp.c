/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abougati <abougati@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 23:08:58 by abougati          #+#    #+#             */
/*   Updated: 2024/10/30 12:06:12 by abougati         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	while ((s1[i] || s2[i]) && i < n)
	{
		if (s1[i] != s2[i])
			return ((unsigned char)s1[i] - (unsigned char)s2[i]);    // we return first ,so i++ wont happen(in case one of them was null) i++;
		i++;
	}
	return (0);
}


int main ()
{
	char	*s1 = "ayoub";
	char	*s2 = "ayo";

	printf("%d", ft_strncmp(s1 , s2 , 5));
	return (0);
}


