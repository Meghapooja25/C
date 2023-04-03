#include<stdio.h>

void main()
{
	int num=0, res=0;

	printf("enter an integer:");
	scanf("%d", &num);

	while(num)
	{
		res=res*10+(num%10);
		num=num/10;
	}
	printf("res=%d\n", res);

	while(res)
	{
		printf("%d\n", res%10);
		res=res/10;
	}
}
