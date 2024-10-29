/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abougati <abougati@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 23:08:52 by abougati          #+#    #+#             */
/*   Updated: 2024/10/29 08:20:59 by abougati         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

 size_t ft_strlen(const char *s)
{
	size_t i = 0;
	while (s[i] != '\0')
		i++;

	return (i);
}

// int main ()
// {
// 	char *s="ayoub";
// 	printf("%zu" , ft_strlen(s));

// 	return 0;
// }