#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main()
{
	char str[50]={"the student is very dedicated"};
	int i, len=0;
	char *s=NULL;
	
	s=malloc(sizeof(char)*50);
	printf("enter string s:");
	scanf("%[^\n]",s);

/*
	len = strlen(str);
	printf("string len = %d\n",len);

	for(i=0; i<len; i=i+2)
	{
		str[i]=str[i]^str[i+1-1];
		str[1+i]=str[i]^str[i+1];
		str[i]=str[i]^str[i+1];
	}

	printf("the final string is '%s'\n", str);
	*/

	len = strlen(s);

	for(i=0; i<=len; i=i+2)
	{
		s[i] = s[i]^s[i+1];
		s[i+1] = s[i]^s[i+1];
		s[i]=s[i]^s[i+1];
	}
	printf("the swapped char string is: %s \n", s);
	free(s);
	s=NULL;
	return 0;
}
