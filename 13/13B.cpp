/*Lesson 13B */
#include <stdio.h>
int main(void)
{
	char moji,Tmoji;
	
	printf("Enter a character:");
	scanf("%c",&moji);
	Tmoji = (moji>>4)|(moji<<4);
	
	printf("before change\tdecimal:%d\tHexadecimal:%x\n",moji,moji);
	printf("before change\tdecimal:%d\tHexadecimal:%x\n",Tmoji,Tmoji);
	
	return 0;
}
