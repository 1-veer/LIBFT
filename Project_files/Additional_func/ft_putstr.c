
#include <unistd.h>

void ft_putstr(char const *s)
{
    int i;
    i=0;

    while(s[i])
    {
        write(1 , &s[i] , 1);
        i++;
    }
}

// int main ()
// {
//     char const *s = "ayoub";
//     ft_putstr(s);
//     return 0;
// }