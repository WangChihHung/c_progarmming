/*Lesson 14F*/
#include <stdio.h>
#include <stdlib.h>
typedef struct Gakusei
{
	char bango[7];
	char name[20];
	struct Gakusei *next;
		
}Gakusei;

int main(void)
{
	Gakusei *student,*cnt;
	int i=0,j,k,min;
	
	student = malloc(sizeof(Gakusei)*2);
	
	
	while(1)
	{
		printf("学籍番号-->");
		if(scanf("%s",student[i].bango)==EOF)
			break;
			
		fflush(stdin);
		
		printf("氏名-->");
		gets(student[i].name);
		/*scanf("%s",student[i].name);*/
		
		/*fflush(stdin);*/
		
		
		i++;
		
		student = realloc(student,sizeof(Gakusei)*(2+i));
	}
	
	
	for(j=0;j<i-1;j++)
	{
		min = j;
		for(k=j+1;k<i;k++)
		{
			//printf("j=%d:%d\t K=%d:%d\n",j,atoi(&student[j].bango[2]),k,atoi(&student[k].bango[2]));
			min = (atoi(&student[min].bango[2]) > atoi(&student[k].bango[2])) ? k : min;	
		}
		//printf("min=%d\n",min);
		student[i] = student[j];
		student[j] = student[min];
		student[min] = student[i];
	}
	
	for(j=0;j<i;j++)
	{
		student[j].next = &student[j+1];
	}
	student[j-1].next = NULL;
	
	for(cnt = &student[0];cnt != NULL; cnt = cnt->next)
	{
		printf("%s %s\n",cnt->bango,cnt->name);
		
		
	}
	
	return 0;
}
