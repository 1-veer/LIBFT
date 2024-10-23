#include <stdlib.h>

char * ft_strmapi(char const *s, char(*f)(unsigned int, char))
{
    if (!s|| !f)
        return NULL;

    unsigned int len,i;
    len=0;

    while (s[len])
        len++;

    char *str=malloc(sizeof(char)*(len+1));
        if(!str)
            return NULL;

    i=0;
        while(i<len)
        {
            str[i]=f(i,s[i]);
            i++;
        }

    str[len]='\0';
        return (str);
}