/*‰Û‘è12G*/
#include <stdio.h>
#include <ctype.h>
/*”Žš‚PŒ…ŒÀ‚è*/
void operate(FILE*);
//void check();

int main(void)
{
	FILE *OutputFile;
	
	OutputFile = fopen("Kadai12G.dat","w");
	if(OutputFile == NULL)
		return 1;
	
	operate(OutputFile);
	
	fclose(OutputFile);
	
	return 0;
}

void operate(FILE *Output)
{
	char string[20];
	int i,j;
	
	int num;
	char moji;
	
	printf("•¶Žš—ñ“ü—Í-->");
	while(scanf("%s",string)!=EOF)
	{
		i=0;
		
		while(string[i]!='\0')
		{
			num=1;
			if(string[i]>='2' && string[i]<='9')
			{
				num = string[i]-'0';
				i++;
			}
			for(j=0;j<num;j++)
			{
				fputc(string[i],Output);
			}
			i++;
		}
		fprintf(Output,"\n");
		printf("•¶Žš—ñ“ü—Í-->");
		
	}
}
/*
void check()
{
	while(isalpha(string[i++])!=0)
		keta++;
}
*/