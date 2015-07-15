/*課題12E*/
#include <stdio.h>
#include <string.h>

int seiseki(FILE*,FILE*);

int main(void)
{
	FILE *LoadData;
	FILE *OutputData;
	
	/*char number[10],name[20],check[5];
	int cnt=0;
	int score;*/
	
	LoadData = fopen("kadai12EIN.dat","r");
	if(LoadData == NULL)
		return 1;
		
	OutputData = fopen("kadai12EOut.dat","w");
	if(OutputData == NULL)
		return 1;	
	
	
/*	while((fscanf(LoadData,"%s %s %d %s",number,name,&score,check))!=EOF)
	{
		if(score<60 || strcmp(check,"x") == 0)
		{
			fprintf(OutputData,"%s %s %d %s\n",number,name,score,check);
			cnt++;
		}
	}*/
	
	
	printf("**実行結果**\n不合格者ファイル出力件数:%d\n",/*cnt*/seiseki(LoadData,OutputData));
	
	fclose(LoadData);
	fclose(OutputData);
	return 0;
}


int seiseki(FILE *in,FILE *out)
{
	int cnt = 0;
	char number[10],name[20],check[5];
	int score;
	
	
	while((fscanf(in,"%s %s %d %s",number,name,&score,check))!=EOF)
	{
		if(score<60 || strcmp(check,"x") == 0)
		{
			fprintf(out,"%s %s %d %s\n",number,name,score,check);
			cnt++;
		}
	}
	
	return cnt;
}
