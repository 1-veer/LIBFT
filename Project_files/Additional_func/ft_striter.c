
void ft_striter(char *s, void (*f)(char *))
{
    if (!s || !f)
		return ;

    unsigned int a;
    a=0;

    while(s[a])
    {
        f(&s[a]);
        a++;
    }
}