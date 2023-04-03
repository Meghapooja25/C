#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main()
{
	int pos = 0;
	int ran = 26;
	int  *p = malloc(ran);
	for(int i = 1; i <= 10; i++)
	{
		p[pos] = i;
		pos++;
	}
	for(int i = 0; i < 10; i++)
	{
		printf("%d ",p[i]);
	}
	

	return 0;
}
