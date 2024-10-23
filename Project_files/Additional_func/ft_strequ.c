

int ft_strequ(char const *s1, char const *s2)
{
    if( s1 && s2 )
    {
        int i;
        i=0;
        
        while(s1[i] && s2[i])
        {   
            if(s1[i]!=s2[i])
                return 0;
            i++;
        }
        if(s1[i]=='\0' && s2[i]=='\0')
            return 1;
    }

    return 0;
}

 #include <stdio.h>

int main ()
{
    char *s1 = "ayoub";
    char *s2= "ayoub";
    printf("%d",ft_strequ(s1 , s2));
    return 0;
}