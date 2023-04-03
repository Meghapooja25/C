#include<stdio.h>
#include<math.h>

void main()
{
	int cnt=0, num =0, p=0;

	printf("enter an integer:");
	scanf("%d", &num);

	cnt=log10(num);

	printf("cnt=%d\n",cnt);
	
	p = pow(10,cnt);
	printf("pow = %d\n", p);
	printf("\n");

	while(num)
	{
		printf("%d\n", num/p);
		num = num%p;
		p=p/10;
	}
	
}
