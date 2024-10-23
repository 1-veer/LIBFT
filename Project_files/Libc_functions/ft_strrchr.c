#include <stdio.h>
#include <stddef.h>


char *ft_strrchr(const char *s, int c)
{
    int i=0;
    while (s[i])
    i++;

    s+=i;

    while (i>=0)
    {
        if ( *--s==(char )c)
        return (char *) s;                
        i--;
    }

    if (c == '\0')
        return ((char *)s);


    return NULL;
}


// not my main 


int main() {
    const char *str = "Hello, world!";
    char ch = 'o';

    char *result = ft_strrchr(str, ch); // Searching for the last occurrence of 'o'
    if (result) {
        printf("Last occurrence of '%c' found at position: %ld\n", ch, result - str);
    } else {
        printf("Character '%c' not found.\n", ch);
    }

    // Testing with null character
    result = ft_strrchr(str, '\0');
    if (result) {
        printf("Null character found at position: %ld\n", result - str);
    }

    return 0;
}

