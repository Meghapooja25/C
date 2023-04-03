#include<stdio.h>
#include<string.h>
#include<stdlib.h>

void main()
{
	char str[10]={"0"}, ch;
	int res[255]={0};
	int i=0, j=0, max_ocr=0;
	char *s = NULL;
	
	//printf("enter string of max size 10:");
	printf("enter string:");
	s = malloc(sizeof(char));
	scanf("%[^\n]",s);

	for(i=0;s[i]!='\0';i++)
	{
		j=(int)s[i];
		res[j]++;

		if(res[j]>=max_ocr)
		{
			max_ocr = res[j];
			ch = s[i];
		}
	}
	free(s);
	s=NULL;
	printf("max_repeated character is: %c\n", ch);
}
