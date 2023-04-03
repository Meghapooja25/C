#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<limits.h>

int main()
{
	char *s = NULL, *ptr=NULL, res[255]={'\0'}, temp='\0', cmin_char='\0', cmax_char='\0', smin_char='\0', smax_char='\0';
	int len = 0, i=0, j=0, cmin=INT_MAX, cmax=0, smin=INT_MAX, smax=0;

	s = malloc(sizeof(char)*250);

	printf("enter string: ");
	scanf("%[^\n]", s);

	len = strlen(s);

	s = realloc(s,sizeof(char)*len);
	ptr = s;

	for(i=0; ptr[i] != '\0'; i++)
	{
		for(j=0; j<len-i-1; j++)
		{
			if(ptr[j]>ptr[j+1])
			{
				temp = ptr[j];
				ptr[j] = ptr[j+1];
				ptr[j+1] = temp;
			}
		}
	}

	for(i=0; i<len; i++)
	{
		if(s[i])
		{
			res[s[i]]++;
		}
	}

	for(i=0; i<len; i++)
	{
		//if(res[s[i]]>0)
		//printf("char: %c, count: %d\n", s[i], res[s[i]]);
	if((s[i] >= 65) && (s[i] <= 90))
	{
		if(res[s[i]] <= cmin)
		{
			cmin = res[s[i]];
			cmin_char = s[i];
		}
		else if(res[s[i]] >= cmax)
		{
			cmax = res[s[i]];
			cmax_char = s[i];
		}
	}
	if((s[i] >= 97) && (s[i] <= 122))
	{
		if(res[s[i]] <= smin)
		{
			smin = res[s[i]];
			smin_char = s[i];
		}
		else if(res[s[i]] >= smax)
		{
			smax = res[s[i]];
			smax_char = s[i];
		}
	}
	}

	printf("Final string: %s\n",ptr);

	printf("Capital ---- Max Repeated: %d, character: %c\n", cmax, cmax_char);
	printf("Capital ---- least Repeated: %d, character: %c\n",cmin, cmin_char);
	printf("Small ---- Max Repeated: %d, character: %c\n", smax, smax_char);
	printf("Small ---- least Repeated: %d, character: %c\n", smin, smin_char);
	return 0;
}
