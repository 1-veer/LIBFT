#include <stdlib.h>

char * ft_strmap(char const *s, char (*f)(char))
{
    if(!s || !f)
        return NULL;

    int len=0;
    while(s[len])
        len++;

    char *str= malloc(sizeof(char)*(len+1));
        if(!str)
            return NULL;

    int i=0;
    while(i<len)
    {
        str[i]=f(s[i]);
        i++;
    }

    str[len]='\0';

    return str;
}
