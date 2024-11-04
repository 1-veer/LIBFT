/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayoub-bg <ayoub-bg@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 23:10:02 by abougati          #+#    #+#             */
/*   Updated: 2024/11/02 12:41:24 by ayoub-bg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	count_words(char const *str, char c)
{
	int in_word;
	int i;
	int count;

	in_word=0;    //the in_word is either 0 or 1 , and represents if we're in word or not.
	i=0;
	count=0;

	while(str[i])     //whenever we encounter the delimiter c we increment the count by 1 INCASE the str continues .
	{
		if(str[i]==c)
			in_word=0;
		else
		{
			if(!in_word)    //this condition true only if in_word==0;
				{
					count++;
					in_word=1;
				}
		}
		i++;
	}
	return (count);
}

static char	*word(char *str, char c)
{
	char *my_word;
	int len;

	len=0;

	while(str[len] && str[len]!= c)
		len++;                          // we could add if (len == 0) -> return (NULL); but if len=0 it's not even a word .
	my_word=malloc(sizeof(char)*(len+1));
		if(!my_word)
			return NULL;
	int i;
	i=0;
	while(i<len)
	{
		my_word[i]=str[i];
		i++;
	}
	my_word[i]='\0';

	return (my_word);
}

char ** ft_split(char const *s, char c)
{
	if(!s)
		return NULL;

	char **arr_of_str;
	int count;

	count=count_words( s , c );
	arr_of_str=malloc(sizeof(char *)*(count + 1));
		if(!arr_of_str)
			return NULL;
	int i;
	i=0;
	while(*s)                                     
	{
		while(*s && *s== c)
		s++;
			if(*s)
			{
				arr_of_str[i]=word((char *)s,c);    //we can add a free function in case not all memory allocations succeed .
				if (!arr_of_str[i])  // If allocation fails, free previously allocated words
            {
                while (i > 0)  // Free allocated words up to the point of failure
                    free(arr_of_str[--i]);
                free(arr_of_str);  // Free array itself
                return NULL; 
            }
			i++;
			}
			while(*s && *s!= c)
				s++;
	}
	arr_of_str[i]=0;
	return (arr_of_str);
}

// void print_split_result(char **result) {
//     if (!result) {
//         printf("NULL result\n");
//         return;
//     }
    
//     for (int i = 0; result[i] != NULL; i++) {
//         printf("'%s'", result[i]);
//         if (result[i + 1] != NULL)
//             printf(", ");
//     }
//     printf("\n");
// }

// void free_split_result(char **result) {
//     if (!result)
//         return;
        
//     for (int i = 0; result[i] != NULL; i++)
//         free(result[i]);
//     free(result);
// }

// int main(void) {
//     char **result;
    
//     // Test 1: Basic splitting with spaces
//     printf("Test 1 - Basic space splitting:\n");
//     result = ft_split("hello world test", ' ');
//     printf("Input: \"hello world test\"\nOutput: ");
//     print_split_result(result);
//     free_split_result(result);
    
//     // Test 2: Multiple consecutive delimiters
//     printf("\nTest 2 - Multiple consecutive delimiters:\n");
//     result = ft_split(",,hello,,world,,test,,", ',');
//     printf("Input: \",,hello,,world,,test,,\"\nOutput: ");
//     print_split_result(result);
//     free_split_result(result);
    
//     // Test 3: Empty string
//     printf("\nTest 3 - Empty string:\n");
//     result = ft_split("", ',');
//     printf("Input: \"\"\nOutput: ");
//     print_split_result(result);
//     free_split_result(result);
    
//     // Test 4: String with only delimiters
//     printf("\nTest 4 - Only delimiters:\n");
//     result = ft_split("     ", ' ');
//     printf("Input: \"     \"\nOutput: ");
//     print_split_result(result);
//     free_split_result(result);
    
//     // Test 5: NULL input
//     printf("\nTest 5 - NULL input:\n");
//     result = ft_split(NULL, ' ');
//     printf("Input: NULL\nOutput: ");
//     print_split_result(result);
//     free_split_result(result);
    
//     // Test 6: Single character delimiter
//     printf("\nTest 6 - Single character delimiter:\n");
//     result = ft_split("a.b.c.d", '.');
//     printf("Input: \"a.b.c.d\"\nOutput: ");
//     print_split_result(result);
//     free_split_result(result);
    
//     // Test 7: No delimiter in string
//     printf("\nTest 7 - No delimiter in string:\n");
//     result = ft_split("hello", ' ');
//     printf("Input: \"hello\"\nOutput: ");
//     print_split_result(result);
//     free_split_result(result);
    
//     return (0);
// }
