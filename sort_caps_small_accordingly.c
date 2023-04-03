#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<ctype.h>

void main()
{
	char *s=NULL;
	int j, k, len=0;

	s=malloc(sizeof(char)*50);
	printf("enter string:");
	scanf("%s",s);

	len = strlen(s);
	printf("len=%d\n", len);

	printf("input string: %s\n", s);

	for(j=0; j<len; j++)
	{
		for(k=j+1; k<len; k++)
		{
			if(((isupper(s[j])) && (isupper(s[k]))) || ((islower(s[j])) && (islower(s[k]))))
			{
				if(s[j] > s[k])
				{
					s[j]=s[j]^s[k];
					s[k]=s[j]^s[k];
					s[j]=s[j]^s[k];
				}
			}
		}
	}

	printf("Sorted string:%s\n", s);
}
