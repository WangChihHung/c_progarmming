/*課題12F*/
#include <stdio.h>


void input(int*);
void operate(FILE*);
void output(int*,int);

int main(int argc, char *argv[])
{
	FILE *LoadData;
	
	LoadData = fopen(argv[1],"r");
	if(LoadData == NULL)
		return 1;
	
	operate(LoadData);
	
	fclose(LoadData);
	
	return 0;
}
void input(int *in)
{
	printf("フィールド入力-->");
	scanf("%d",in);
}
void operate(FILE *Load)
{
	char number[20];
	int score[4];
	int temp[20];
	int field;
	
	int cnt = 0;
	int sum = 0;
	double avg;
	int i;
	
	input(&field);
	
	printf("\nデータ：");
	
	while((fscanf(Load,"%s %d %d %d",number,&score[0],&score[1],&score[2]))!=EOF)
	{
		temp[cnt] = score[field-1];
		sum += score[field-1];
		cnt++;
	}
	
	output(temp,cnt);
	
	avg = (double) sum/cnt;
	printf("\n平均：%.1f",avg);
}
void output(int *score,int cnt)
{
	int i;
	for(i=0;i<cnt;i++)
	{
		if(i!=cnt-1)
			printf("%d, ",score[i]);
		else
			printf("%d",score[i]);
	}
}