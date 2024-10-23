

size_t strlcpy(char *dst, const char *src, size_t size)
{
    if (!src || !dst)
        return (0);

   size_t i;
   
   if(size == 0)
    return (ft_strlen(src));

    i=0;
    while(src[i] && i<(size - 1))   // the -1 is for the null teminator
    {
        dst[i]=src[i];
        i++;
    }

    dst[i]= '\0';

    return (ft_strlen(src));
}

