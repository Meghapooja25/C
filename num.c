#include<stdio.h>
#include<math.h>

int main()
{
	int num;
	int p = 0;
	int temp = 0;
	scanf("%d", &num);
	temp = num;
	int cnt = 0;
	while(temp)
	{
		temp = temp/10;
		cnt++;
	}
	cnt=cnt-1;
	p = pow(10,cnt);
	printf("pow = %d \n",p);;
	while(num)
	{
		printf("%d\n ",num/p);
		num = num%p;
		p = p/10;
	}
	return 0;
}
