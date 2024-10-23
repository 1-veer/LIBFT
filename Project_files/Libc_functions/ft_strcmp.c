
int ft_strcmp(const char *s1, const char *s2)
{
    int i=0;
    while(s1[i] && s2[i] && s1[i]==s2[i])
    {                                                 // in case both of them are null , we return 0 cuz there is nothing more to compare
        i++;                                          //?????? //"This ensures that you will compare up to n characters, regardless of null bytes.
    }      
  return ((unsigned char)s1[i] - (unsigned char)s2[i]);
}