/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abougati <abougati@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 23:10:27 by abougati          #+#    #+#             */
/*   Updated: 2024/10/24 15:59:29 by abougati         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// int ft_strlen (const char *str)
// {
// 	int i = 0;
// 	while(str[i] != '\0')
// 		i++;

// 	return (i);
// }
// char *ft_strdup(const char *s)
// {
//     char *dup;
//     int i=0;
//     while (s[i])
//         i++;
    
//     dup = (char *)malloc(sizeof(char)*(i+1));
//     if(!dup)
//       return NULL;

//     i=0;
//     while(s[i])
//     {
//         dup[i]=s[i];
//         i++;
//     }
//     dup[i]='\0';
//     return (dup);
// }

char * ft_strtrim(const char *s)
{
    int start=0 ;
    int end = ft_strlen(s) -1 ; //so end will be set on the last char  of s

    while (s[start] == ' ' || s[start] == '\n' || s[start] == '\t') {
        start++;
    }
    while (end >= start && (s[end] == ' ' || s[end] == '\n' || s[end] == '\t')) {
        end--;
    }
    if ( start == 0 && end == ft_strlen(s)-1) //if s has no whites-paces at the beginning or at the end , so we check if start and end did not change.
        return (ft_strdup(s));

    char *str = malloc (sizeof(char)*(((end - start) +1)+1)); //+1 for the null 
        if(!str)
            return NULL;
    int i=0;

    while(i<((end - start) +1)) //((end - start) +1) represents the LENGTH
    {
       str[i]=s[start+i];  // start is already indexing the first non-whiteSpace char  , and we copy from that point
       i++;
    }
    str[i]='\0';

    return (str);
}

// #include <stdio.h>

// int main() {
//     const char *test1 = "   Hello, World!   ";
//     const char *test2 = "\n\t   Example String\t\n";
//     const char *test3 = "NoWhitespace";
//     const char *test4 = "    Leading spaces";
//     const char *test5 = "Trailing spaces    ";
//     const char *test6 = "   \n\t   ";  // Only whitespace
//     const char *test7 = "";            // Empty string


//     char *trimmed;

//     // Test case 1
//     trimmed = ft_strtrim(test1);
//     printf("Original: '%s' | Trimmed: '%s'\n", test1, trimmed);
//     free(trimmed); // Free allocated memory

//     // Test case 2
//     trimmed = ft_strtrim(test2);
//     printf("Original: '%s' | Trimmed: '%s'\n", test2, trimmed);
//     free(trimmed);

//     // Test case 3
//     trimmed = ft_strtrim(test3);
//     printf("Original: '%s' | Trimmed: '%s'\n", test3, trimmed);
//     free(trimmed);

//     // Test case 4
//     trimmed = ft_strtrim(test4);
//     printf("Original: '%s' | Trimmed: '%s'\n", test4, trimmed);
//     free(trimmed);

//     // Test case 5
//     trimmed = ft_strtrim(test5);
//     printf("Original: '%s' | Trimmed: '%s'\n", test5, trimmed);
//     free(trimmed);

//     // Test case 6
//     trimmed = ft_strtrim(test6);
//     printf("Original: '%s' | Trimmed: '%s'\n", test6, trimmed);
//     free(trimmed);

//     // Test case 7
//     trimmed = ft_strtrim(test7);
//     printf("Original: '%s' | Trimmed: '%s'\n", test7, trimmed);
//     free(trimmed);


//     return 0;
// }
