#include <stddef.h>

int ft_strnequ(char const *s1, char const *s2,size_t n)
{
    if( s1 && s2 )
    {
        size_t i;
        i=0;
        
        while(s1[i] && s2[i] && i<n)
        {   
            if(s1[i]!=s2[i])
                return 0;
            i++;
        }
        return 1;
    }

    return 0;
}

#include <stdio.h>

int main ()
{
    char *s1 = "ayoub";
    char *s2= "ayoue";
    printf("%d",ft_strnequ(s1 , s2 , 4));
    return 0;
}
