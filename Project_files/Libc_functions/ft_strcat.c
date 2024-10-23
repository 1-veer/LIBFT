
char *ft_strcat(char *dst, const char *src)
{
    int i=0 , j=0;
    while(dst[i])
        i++;
    while(src[j])
        {
            dst[i+j]=src[j];
            j++;
        }
    return (dst);
}