#include <stdio.h>

typedef struct Gaku
{
	char g_no[7];
	int g_kamoku1;
	int g_kamoku2;
	double heikin;
}Gaku;

void input(Gaku*);
void output(Gaku*);

int main(void)
{
	int i;
	Gaku student[3];
	
	for (i=0;i<3;i++)
	{
		input(student+i);
	}
	for (i=0;i<3;i++)
	{
		output(student+i);
	}
	
	return 0;
}
void input(Gaku *stu)
{
	printf("number:");
	gets(stu->g_no);
	printf("score1:");
	scanf("%d",&stu->g_kamoku1);
	printf("score2:");
	scanf("%d",&stu->g_kamoku2);
	printf("\n");
	stu->heikin = (double) (stu->g_kamoku1 + stu->g_kamoku2)/2;
	fflush(stdin);
}
void output(Gaku *stu)
{
	printf("number:%s\nscore1:%d\nscore2:%d\naverage:%.1f\n",stu->g_no,stu->g_kamoku1,stu->g_kamoku2,stu->heikin);
	
}
