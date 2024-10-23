

void ft_striteri(char *s, void (*f)(unsigned int,char *))
{
    if (!s || !f)
		return ;

    unsigned int a;
    a=0;

    while(s[a])
    {
        f(a , &s[a]);
        a++;
    }
}