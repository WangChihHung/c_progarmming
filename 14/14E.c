/*Lesson 14E*/
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
	
	student = malloc(sizeof(Gaku)*100);
	
	input_data(student);
	
	print_out(student,cnt);
	
	free(student);
	
	return 0;
}

void input_data(Gaku *student)
{
	//int i=0;
	printf("学籍番号-->");
	while(scanf("%s",student->g_no)!=EOF)
	{
		
		fflush(stdin);
		
		printf("科目１-->");
		scanf("%d",&student->g_kamoku1);
		
		printf("科目２-->");
		scanf("%d",&student->g_kamoku2);
		
		student->heikin = (double)(student->g_kamoku1 + student->g_kamoku2) / 2 ;
		
		student->p_next_p = student+1;
		
		printf("%s\t%d\t%d\t%.1f",student->g_no,student->g_kamoku1,student->g_kamoku2,student->heikin);
		
		//printf("student[%d]:%p\tstudent[%d].p_next_p:%p\n",i+1,&student[i+1],i,student->p_next_p);
		
		//i++;
		
		student++;
		printf("\n学籍番号-->");
	}
	
	(student-1)->p_next_p = NULL;
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
