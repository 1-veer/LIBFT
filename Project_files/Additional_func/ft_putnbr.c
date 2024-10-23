#include <unistd.h>

void put(char c)
{
    write ( 1 , &c , 1);
}

void ft_putnbr(int n)
{
    unsigned int nbr ;
    
    if (n<0)
    {
        put('-');
        nbr=-n;
    }
    else 
        nbr=n;

    if ( nbr < 10)
        put(nbr+48);

    else 
    {
        ft_putnbr(nbr/10);
        ft_putnbr(nbr%10);
    }
}

// int main ()
// {
//     ft_putnbr(10);
//     return 0;
// }