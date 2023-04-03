#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main()
{
	char str[50]={"the student is very dedicated"};
	int i, len=0;
	char *s=NULL;
	
	s=malloc(sizeof(char));
	printf("enter string s:");
	scanf("%[^\n]",s);
/*
	len = strlen(str);
	printf("string len = %d\n",len);

	for(i=0; i<len/2; i++)
	{
		str[i]=str[i]^str[len-i-1];
		str[len-1-i]=str[i]^str[len-i-1];
		str[i]=str[i]^str[len-i-1];
	}

	printf("the final string is '%s'\n", str);
	*/

	len = strlen(s);

	for(i=0; i<len/2; i++)
	{
		s[i] = s[i]^s[len-i-1];
		s[len-i-1] = s[i]^s[len-i-1];
		s[i]=s[i]^s[len-i-1];
	}
	printf("the reversed char string is: %s \n", s);
	free(s);
	s=NULL;
	return 0;
}
