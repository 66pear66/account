#include <stdio.h>
#include <string.h>
void main()
{
	char str1[100],str2[10];
	int i=0,j=0,count=0;
	gets(str1);
	gets(str2);
	strlwr(str1);
	strlwr(str2);
	for(i=0;str1[i]!='\0';i++)
	{
		int k=0;
		for(j=i;str1[j]==str2[k]&&str1[j]!='\0';k++,j++)
		{
			if(str2[k+1]=='\0')
			{
				count++;
				break;
			}
		}
	}
	printf("%d\n",count);
}
