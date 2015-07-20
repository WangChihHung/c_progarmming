/*Lesson 14A*/
#include <stdio.h>

int main(void) 
{
	
	struct Syohin
	{
		char bango[6];
		char name[30];
		int tanka;		
	
	}TV;
	
	printf("number:");
	gets(TV.bango);
	printf("name:");
	gets(TV.name);
	printf("price:");
	scanf("%d",&TV.tanka);
	
	
	printf("number:%s\nname:%s\nprice:%d\n",TV.bango,TV.name,TV.tanka);
	
	return 0;
}
 
