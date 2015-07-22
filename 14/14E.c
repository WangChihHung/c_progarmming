/*Lesson 14E*/
/*non-complite*/
#include <stdio.h>
#include <stdlib.h>

typedef struct Gaku
{
	char g_no[7];
	int g_kamoku1;
	int g_kamoku2;
	double heikin;
	struct Gaku *p_next_p;
	
}Gaku;

void input_data(Gaku*);
void print_out(Gaku*,Gaku*);

int main(void)
{
	Gaku *student,*cnt;
	
	student = malloc(sizeof(Gaku)*2);
	
	input_data(student);
	
	print_out(student,cnt);
	
	free(student);
	
	return 0;
}

void input_data(Gaku *student)
{
	int i=0;
	
	
	printf("学籍番号-->");
	while(scanf("%s",student[i].g_no)!=EOF)
	{
		fflush(stdin);
		
		printf("科目１-->");
		scanf("%d",&student[i].g_kamoku1);
		
		printf("科目２-->");
		scanf("%d",&student[i].g_kamoku2);
		
		student->heikin = (double)(student[i].g_kamoku1 + student[i].g_kamoku2) / 2 ;
		
		
		student->p_next_p = &student[i+1];
		
		printf("student[%d]:%p\tstudent[%d]:%p\n",i,&student[i],i+1,&student[i+1]);
		
		i++;
		
		student = realloc(student,sizeof(Gaku)*2+i);
		
		printf("\n学籍番号-->");
	}
	
	student[i-1].p_next_p = NULL;
}

void print_out(Gaku *student,Gaku *data)
{
	for(data = &student[0];data != NULL; data = data->p_next_p)
	{
		printf("\n学籍番号:%s\n",data->g_no);
		printf("科目１:%d\n",data->g_kamoku1);
		printf("科目２:%d\n",data->g_kamoku2);
		printf("平均:%.1f\n",data->heikin);
	}
	
}
