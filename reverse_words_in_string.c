#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main()
{
	char *str=NULL, *temp=NULL;
	char **words=NULL;
	int tok_len=0, spc_cnt=0;	
	int min=0, max=0, min_pos=0, max_pos=0;

	str=malloc(sizeof(char)*250);
 
	printf("enter input string:");
	scanf("%[^\n]", str);

	tok_len = strlen(str);
	str = realloc(str, tok_len*sizeof(char));

	for(int i = 0; str[i] != '\0'; i++)
	{
		if(str[i] == ' ')
		{
			spc_cnt++;
		}
	}
//	printf("spaces_cnt = %d\n", spc_cnt);

	words = malloc(sizeof(char)*(spc_cnt+1));
	spc_cnt = 0;
	tok_len = 0;

	while(str != NULL)
	{
		words[spc_cnt] = strtok(str," ");
		printf("token: %s\n", words[spc_cnt]);
		if(words[spc_cnt])
		{
			tok_len = strlen(words[spc_cnt]);
						
			if(tok_len >= max)
			{
				max = tok_len;
				if(spc_cnt == 0) {
					min = tok_len;
				min_pos = spc_cnt;
				}
				max_pos = spc_cnt;
			}
			else if((tok_len <= min))
			{
				min = tok_len;
				min_pos = spc_cnt;
			}
			str=str+tok_len+1;
			spc_cnt++;
		}
		else
		{
			printf("end of words in the input string.\n");
			break;
		}
	}

	printf("min repeated word len : %d --> %s\n",min,words[min_pos]);
	printf("max repeated word len : %d --> %s\n",max,words[max_pos]);

	for(int i = 0; i < spc_cnt; i++)
	{
		printf("%s ", words[i]);
	}
	printf("\n");

	for(int i=0; i<spc_cnt/2; i++)
	{
		temp = words[i];
		words[i]=words[spc_cnt-i-1];
		words[spc_cnt-i-1]=temp;
	}
	for(int i = 0; i < spc_cnt; i++)
	{
		printf("%s ", words[i]);
	}
	printf("\n");
	return 0;
}
