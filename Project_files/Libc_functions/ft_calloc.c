#include <stdlib.h>

void *ft_calloc(size_t nmemb, size_t size)
{
    char *str;
    size_t total_size = nmemb*size;

    str = malloc(total_size);
    if(!str)
        return NULL;

    ft_bzero(str,total_size);

    return (str);
}