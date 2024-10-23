#include <stdio.h>


void *ft_memccpy(void *dest, const void *src,int c, size_t n)
{
    char* p1 = dest ;
    const char* p2 =src;

    int i=0;
    int j=0;

    while ( n-- > 0 &&  p2[i]!=c )
    {
        p1[i++] = p2[j++];
    }

    return dest ;
}



int main ()
{
    int i;

    char dest[4];
    const char src[4]="abcd";


    ft_memccpy( dest , src ,  'd' , 4 );  
    
    for(i=0 ; i<4 ; i++)
        printf("%c" , src[i]);

    printf("\n");

    for(i=0 ; i<4; i++)
        printf("%c" , dest[i]);
   
}
    