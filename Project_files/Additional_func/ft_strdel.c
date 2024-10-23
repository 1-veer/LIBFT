#include <stdlib.h>

void ft_strdel(char **as)
{
    if(*as)
    {
        free(*as);
        *as=NULL;
    }
}


// void	ft_strdel(char **as)
// {
// 	ft_memdel((void**)as);
// }