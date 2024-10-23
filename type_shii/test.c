
char *ft_strstr(char *haystack, char *needle)
{
    int i,j;
    i=0;
 
    if (*needle == '\0')
        return haystack;

    
    while (haystack[i])
    {
        j=0;
        while(haystack[i+j]==needle[j])      // the good practice here is to add the condition : haystack[i+j]!= '\0'; , so it can be in the bounds.
            {
                j++;

                if(needle[j]=='\0')
                    return (&haystack[i]);
            }
        i++;
    }

    return (0);
}