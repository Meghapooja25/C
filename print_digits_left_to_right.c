#include<stdio.h>
#include<stdlib.h>
#include<string.h>

void main()
{
	int num=0, i=0, len=0;
	char *s=NULL;

	printf("enter the number:");
	scanf("%d", &num);

	s=malloc(1);

	while(num)
	{
		s[i]=num%10;
		num = num/10;
		i++;
		if(num)
			s=realloc(s, i+1);
	}

	len = strlen(s);

	for(i=0; i<len/2; i++)
	{
		s[i] = s[i]^s[len-i-1];
		s[len-i-1] = s[i]^s[len-i-1];
		s[i] = s[i]^s[len-i-1];
	}
	for(i=0; s[i] != '\0'; i++)
		printf("%c\n",s[i]+0x30); 
}
