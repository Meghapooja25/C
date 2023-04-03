#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main()
{
	char *str=NULL, *temp=NULL;
	char **words=NULL;
	int tok_len=0, cnt=0;	
	int min=0, max=0, min_pos=0, max_pos=0;

	str=malloc(sizeof(char)*250);
	
	printf("enter input string:");
	scanf("%[^\n]", str);

	tok_len = strlen(str);
	str = realloc(str, sizeof(char)*tok_len-1);

	for(int i = 0; str[i] != '\0'; i++)
	{
		if(str[i] == ' ')
		{
			cnt++;
		}
	}

	words=malloc(sizeof(char)*cnt+1);
	cnt = 0;
	tok_len = 0;

	while(str != NULL)
	{
		words[cnt] = strtok(str," ");
		printf("token: %s\n", words[cnt]);
		if(words[cnt])
		{
			tok_len = strlen(words[cnt]);
			
			if(tok_len >= max)
			{
				max = tok_len;
				if(cnt == 0) {
					min = tok_len;
				min_pos = cnt;
				}
				max_pos = cnt;
			}
			else if((tok_len <= min))
			{
				min = tok_len;
				min_pos = cnt;
			}
			str=str+tok_len+1;
			cnt++;
		}
		else
		{
			printf("end of words in the input string.\n");
			break;
		}
	}

	printf("min repeated word len : %d --> %s\n",min,words[min_pos]);
	printf("max repeated word len : %d --> %s\n",max,words[max_pos]);

	for(int i = 0; i < cnt; i++)
	{
		printf("%s ", words[i]);
	}
	printf("\n");

	for(int i=0; i<cnt; i++)
	{
		temp = words[i];
		words[i]=words[i+1];
		words[i+1]=temp;
		i++;
	}
	for(int i = 0; i < cnt; i++)
	{
		printf("%s ", words[i]);
	}
	printf("\n");
	return 0;
}
