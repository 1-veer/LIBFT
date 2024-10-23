
char *ft_strncat(char *dst, const char *src , int n )
{
    int i=0 , j=0;
    while(dst[i])
        i++;
    while(src[j] && j<n)
        {
            dst[i+j]=src[j];
            j++;
        }
    return (dst);
}