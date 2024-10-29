/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abougati <abougati@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 23:09:14 by abougati          #+#    #+#             */
/*   Updated: 2024/10/29 08:17:21 by abougati         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_tolower(int c)
{
	if (c >= 'A' && c <= 'Z')
		c += 32;
	return (c);
}

// int main ()
// {
// 	char a = 88 , b=89;   // instead of X , Y
// 	printf("%c\n", ft_tolower(a));
// 	printf("%c\n", ft_tolower(b));
// 	return 0;
// }
