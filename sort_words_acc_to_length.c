#include<stdio.h>
#include<stdlib.h>
#include<string.h>

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
	printf("spaces_cnt = %d\n", spc_cnt);

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
	                str=str+tok_len+1;
                        spc_cnt++;
                }
                else
                {
                        printf("end of words in the input string.\n");
                        break;
                }
        }

	for(int i = 0; i < spc_cnt; i++)
        {
                printf("%s ", words[i]);
        }
	printf("\n");

        for(int i=0; i<spc_cnt; i++)
        {
		for(int j=0; j<spc_cnt; j++)
		{
			if(strlen(words[i]) < strlen(words[j]))
			{
                		temp = words[i];
                		words[i]=words[j];
                		words[j]=temp;
			}
		}
        }
        for(int i = 0; i < spc_cnt; i++)
        {
                printf("%s ", words[i]);
        }
        printf("\n");
}
