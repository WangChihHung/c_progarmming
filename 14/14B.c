/*Lesson 14B*/
#include <stdio.h>

struct Gaku
{
	char g_no[7];
	char g_name[13];
	int g_kamoku1;
	int g_kamoku2;
	double g_heikin;
};

int main (void)
{
	struct Gaku student;
	printf("number:");
	gets(student.g_no);
	printf("name:");
	gets(student.g_name);
	printf("score1:");
	scanf("%d",&student.g_kamoku1);
	printf("score2:");
	scanf("%d",&student.g_kamoku2);
	
	student.g_heikin = (double) (student.g_kamoku1+student.g_kamoku2)/2;
	
	
	printf("numebr:%s\nname:%s\nscore1:%d\nscore:%d\naverage:%.1f",student.g_no,student.g_name,student.g_kamoku1,student.g_kamoku2,student.g_heikin);
	
	return 0;
}
