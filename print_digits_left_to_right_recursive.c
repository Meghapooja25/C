#include<stdio.h>

void print_num_left2right(int);

int ans=0;

void main()
{
	int num=0;

	printf("enter an integer:");
	scanf("%d", &num);

	print_num_left2right(num);

	while(ans)
	{
		printf("%d\n", ans%10);
		ans=ans/10;
	}
}

void print_num_left2right(int res)
{
	if(res)
	{
		ans=ans*10+(res%10);
		res=res/10;

		return print_num_left2right(res);
	}
}
