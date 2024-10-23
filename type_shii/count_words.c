
int count_words(char *str)
{
	int i=0;
	int count=0;
	int toggle =1;
	
	while(str[i])
	{
		if(str[i]==' ')
		{
			toggle=1;
			i++;
		}
		else
		{
			if(toggle)
			    count+=1;
			toggle=0;
			i++;
		}	
	}
	return count;
}

#include <stdio.h>

int main ()
{
	char *str="  aaaa bbbb cccc  dddd ";
	printf("%d" , count_words(str));
	return 0;
}

