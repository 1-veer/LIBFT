#include <stdio.h>


void *ft_memmove(void* dest, const void* src,  size_t n)
{
    char* d1= dest ;
    const char* s1 =src;

    if ( s1 > d1)
    {
    while ( n-- )
        *d1++ = *s1++;
    }

    else 
    {
        s1+= n-1;
        d1+= n-1;
        while (n--)
        {
            *d1--=*s1--;
        }
    }

    return (void *) dest ;
}


int main ()
{
    int i;

    char dest[4];
    const char src[4]="abcd";


    ft_memmove( dest , src , 3 );  
    
    for(i=0 ; i<4 ; i++)
        printf("%c" , src[i]);

    printf("\n");

    for(i=0 ; i<4; i++)
        printf("%c" , dest[i]);
   
}