/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abougati <abougati@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 23:09:36 by abougati          #+#    #+#             */
/*   Updated: 2024/11/09 20:20:49 by abougati         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	num_length(int n)
{
	int	len;

	len = 0;
	if (n == 0)
		return (1);
	len += (n < 0);
	while (n != 0)
	{
		len++;
		n = n / 10;
	}
	return (len);
}

static char	*extra(char *str, long number, int len)
{
	while (number > 0)
	{
		str[len--] = number % 10 + '0';
		number /= 10;
	}
	return (str);
}

char	*ft_itoa(int n)
{
	long	number;
	int		len;
	char	*str;

	number = n;
	len = num_length(n);
	str = malloc(sizeof(char) * (len + 1));
	if (!str)
		return (NULL);
	str[len--] = '\0';
	if (number == 0)
	{
		str[0] = '0';
		return (str);
	}
	if (number < 0)
	{
		str[0] = '-';
		number *= -1;
	}
	str = extra(str, number, len);
	return (str);
}
