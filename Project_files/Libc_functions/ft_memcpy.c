#include <stdio.h>


void *ft_memcpy(void* dest, const void* src,  size_t n)
{
    char* p1 = dest ;
    const char* p2 =src;

    while ( n-- > 0)
    {
        *p1++ = *p2++;
    }

    return dest ;
}



// int main ()
// {
//     int i;

//     char dest[4];
//     const char src[4]="abcd";


//     ft_memcpy( dest , src , 2 );  
    
//     for(i=0 ; i<4 ; i++)
//         printf("%c" , src[i]);

//     printf("\n");

//     for(i=0 ; i<4; i++)
//         printf("%c" , dest[i]);
   
// }
    