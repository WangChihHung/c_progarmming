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

int main(void)
{
	Gaku *student,*cnt;
	
	int i=0;
	student = malloc(sizeof(Gaku)*2);
	
	
	while(1)
	{
		printf("\n学籍番号-->");
		if(scanf("%s",student[i].g_no)==EOF)
			break;
		fflush(stdin);
		
		printf("科目１-->");
		scanf("%d",&student[i].g_kamoku1);
		
		printf("科目２-->");
		scanf("%d",&student[i].g_kamoku2);
		
		student[i].heikin = (double)(student[i].g_kamoku1 + student[i].g_kamoku2) / 2 ;
		
		student[i].p_next_p = &student[i+1];
		
		i++;
		
		student = realloc(student,sizeof(Gaku)*2+i);
		
	}
	
	student[i-1].p_next_p = NULL;
	
	for(cnt = &student[0];cnt != NULL; cnt = cnt->p_next_p)
	{
		printf("\n学籍番号:%s\n",cnt->g_no);
		printf("科目１:%d\n",cnt->g_kamoku1);
		printf("科目２:%d\n",cnt->g_kamoku2);
		printf("平均:%.1f\n",cnt->heikin);
	}
	
	free(student);
	
	return 0;
}

