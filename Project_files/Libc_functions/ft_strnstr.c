char *ft_strnstr( char *haystack , char *needle, int len)
{
    int i=0,j=0;
    if (needle[0]=='\0')
        return (haystack);
    
    while(haystack[i])
        {
            while(haystack[i+j] && haystack[i+j]==needle[j] && j<len)
                j++;

                if(needle[j]=='\0')
                return (&haystack[i]);
            i++;
        }
    return 0;
}
#include <stdio.h>
int main ()
{
    char *s1 = "ayoab4ub";
    char *s2 = "ab4";
    printf("%s" , ft_strnstr(s1  , s2 , 3));
    return 0;
}