
char *ft_strstr(char *haystack, char *needle)
{
    int i=0,j=0;
    if (needle[0]=='\0')
        return (haystack);
    
    while(haystack[i])
        {
            while(haystack[i+j] && haystack[i+j]==needle[j])
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
    char *s1 = "ayoabub";
    char *s2 = "ab";
    printf("%s" , strstr(s1  , s2 ));
    return 0;
}