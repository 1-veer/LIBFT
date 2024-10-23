#include <stdio.h>


void ft_bzero(void *s, size_t n)
{   
    char *p = s ;
    while ( n-- > 0 )
    {
        *p++ = 0;
    }
}



int main ()
{
    int i;

    char s[4] = "abcd";


    ft_bzero( s , 3 );  
    
    for(i=0 ; i<4 ; i++)
        printf("%c" , s[i]);

}