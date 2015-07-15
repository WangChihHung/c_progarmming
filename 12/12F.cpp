#include <stdio.h>
#include <stdlib.h>

void op(FILE *load,int *sum,int *cnt,int *field);

int main(int argc,char *argv[])
{
	FILE *LoadData;
	
	int field;
	int cnt = 0;
	int sum =0;
	double avg;
	
	LoadData = fopen(argv[1],"r");
	if(LoadData == NULL)
		return 1;
	
	printf("フィールド入力-->");
	scanf("%d",&field);
	
	printf("データ:");
	
	/*while((fscanf(LoadData,"%s %d %d %d",data,&score[0],&score[1],&score[2]))!=EOF);
	{
		printf("%d ",data,score[field-1]);
		sum += score[field-1];
		cnt++;
	}*/
	op(LoadData,&sum,&cnt,&field);
	
	
	avg = (double) sum/cnt;
	
	printf("\n平均:%.1f",avg);
	
	fclose(LoadData);
	
	return 0;
}
void op(FILE *load,int *sum,int *cnt,int *field)
{
	char data[20];
	int score[3];
	
	while(fscanf(load,"%s %d %d %d",data,&score[0],&score[1],&score[2])!=EOF)
	{
		printf("%d, ",score[*field-1])
		(*sum) += score[(*field)-1];
		(*cnt)++;
	}
	
}