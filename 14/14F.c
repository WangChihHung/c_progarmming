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
	int i=0;
	
	student = malloc(sizeof(Gakusei)*2);
	
	
	while(1)
	{
		printf("学籍番号-->");
		if(scanf("%s",student[i].bango)==EOF)
			break;
			
		fflush(stdin);
		
		printf("氏名-->");
		scanf("%s",student[i].name);
		
		fflush(stdin);
		
		student[i].next = &student[i+1];
		
		i++;
		
		student = realloc(student,sizeof(Gakusei)*2+i);
	}
	
	student[i-1].next = NULL;
	
	for(cnt = &student[0];cnt != NULL; cnt = cnt->next)
	{
		printf("%s %s\n",cnt->bango,cnt->name);
		
		
	}
	
	return 0;
}
