/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abougati <abougati@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 23:10:02 by abougati          #+#    #+#             */
/*   Updated: 2024/11/11 17:17:55 by abougati         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	count_words(char const *str, char c)
{
	int	in_word;
	int	i;
	int	count;

	in_word = 0;
	i = 0;
	count = 0;
	while (str[i])
	{
		if (str[i] == c)
			in_word = 0;
		else
		{
			if (!in_word)
			{
				count++;
				in_word = 1;
			}
		}
		i++;
	}
	return (count);
}

static char	*word(char *str, char c)
{
	char	*my_word;
	int		len;
	int		i;

	len = 0;
	while (str[len] && str[len] != c)
		len++;
	my_word = malloc(sizeof(char) * (len + 1));
	if (!my_word)
		return (NULL);
	i = 0;
	while (i < len)
	{
		my_word[i] = str[i];
		i++;
	}
	my_word[i] = '\0';
	return (my_word);
}

static void	free_all(char **arr, int count)
{
	while (count-- > 0)
		free(arr[count]);
	free(arr);
}

static int	extra(char **arr_of_str, char const **s, char c, int *count)
{
	while (**s && **s == c)
		(*s)++;
	if (**s)
	{
		arr_of_str[*count] = word((char *)*s, c);
		if (!arr_of_str[*count])
		{
			free_all(arr_of_str, *count);
			return (0);
		}
		(*count)++;
	}
	while (**s && **s != c)
		(*s)++;
	return (1);
}

char	**ft_split(char const *s, char c)
{
	char	**arr_of_str;
	int		count;
	int		a;

	if (!s)
		return (NULL);
	count = count_words(s, c);
	arr_of_str = malloc(sizeof(char *) * (count + 1));
	if (!arr_of_str)
		return (NULL);
	count = 0;
	while (*s)
	{
		a = extra(arr_of_str, &s, c, &count);
		if (!a)
			return (NULL);
	}
	arr_of_str[count] = NULL;
	return (arr_of_str);
}
