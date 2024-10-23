#include <stdlib.h>

void ft_bzero(void *s, size_t n)
{   
    char *p = s ;
    while ( n-- > 0 )
    {
        *p++ = 0;
    }
}

void * ft_memalloc(size_t size)
{
    void *p ;

    p= malloc (size);

    if(!p)
        return NULL;

    ft_bzero (p,size);

    return (p);
}
