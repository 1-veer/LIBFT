#include <stdio.h>

char *ft_memset (void *dest, int c, size_t n)
{
    unsigned char* pointer = dest ;

    while (n >0)
    {
        *pointer=c;
        pointer++;
        n--;
    }

    return dest;
}


// int main ()
// {
//     int i;

//     char buff[4];


//     ft_memset( buff , 'a' , sizeof(char)*2);  
//     ft_memset( buff+2 , 'b' , sizeof(char)*2);
    
//     for(i=0 ; i<4 ; i++)
//         printf("%c" , buff[i]);

//     printf("\n");

//     printf ("%s" , ft_memset(buff , 'x', 4));
// }