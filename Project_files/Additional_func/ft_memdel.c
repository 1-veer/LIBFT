#include <stdlib.h>

void ft_memdel(void **ap)
{
    if(*ap)
    {
        free(*ap);
        *ap=NULL;
    }
}


// When you have a pointer to a pointer, like **ptr, it means you're dealing with a double pointer.
//  This is often used when you want to modify the original pointer (e.g., in a function) from within the function.

// In this case, *ptr refers to the pointer itself (the address it's holding),
//  and **ptr refers to the value stored at the memory location pointed to by that pointer.