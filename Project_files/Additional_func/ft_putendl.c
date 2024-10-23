
#include <unistd.h>

void ft_putendl(char const *s)
{
    int i;
    i=0;

    while(s[i])
    {
        write(1 , &s[i] , 1);
        i++;
    }

    write(1 , "\n" , 1);
}

// int main ()
// {
//     char const *s = "ayoub";
//     ft_putendl(s);
//     ft_putendl(s);
//      return 0;
//  }