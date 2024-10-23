
int ft_strncmp(const char *s1, const char *s2 , int n)
{
    int i=0;
    while((s1[i] || s2[i]) && i<n)
    {
        if(s1[i]!=s2[i])
        return ((unsigned char)s1[i] - (unsigned char)s2[i]);    //we return first , so i++; wont happen (in case one of them was null)
        i++;
    }  
    return 0;
}
/*
#include <stdio.h>
int main ()
{
    const char *s1 = "ayoub";
    const char *s2 = "ayo";
    printf("%d", ft_strncmp(s1 , s2 , 4));

    return 0;
}
*/
