/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abougati <abougati@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 23:10:27 by abougati          #+#    #+#             */
/*   Updated: 2024/11/13 16:56:10 by abougati         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	check(const char *set, char c)
{
	while (*set)
	{
		if (c == *set)
			return (1);
		set++;
	}
	return (0);
}

static void	set_end_and_start(size_t *end, size_t *start, char const *s,
		char const *set)
{
	while (check(set, s[*start]))
		(*start)++;
	while (*end >= *start && check(set, s[*end]))
		(*end)--;
}

char	*ft_strtrim(char const *s, char const *set)
{
	size_t	start;
	size_t	end;
	char	*str;
	size_t	i;

	if (!s || !set)
		return (NULL);
	start = 0;
	end = ft_strlen(s) - 1;
	set_end_and_start(&end, &start, s, set);
	if (start == 0 && end == ft_strlen(s) - 1)
		return (ft_strdup(s));
	str = malloc(sizeof(char) * (((end - start) + 1) + 1));
	if (!str)
		return (NULL);
	i = 0;
	while (s[start + i] && i < ((end - start) + 1))
	{
		str[i] = s[start + i];
		i++;
	}
	str[i] = '\0';
	return (str);
}
