/*Lesson 13C*/
#include <stdio.h>
int main(void)
{
	unsigned char a,b;
	int i;
	
	printf("Enter an integer(0~255):");
	scanf("%d",&a);
	
	b = a;
	
	printf("binary:");
	for(i=0;i<8;i++)
	{
		a=b;
		a <<= i;
		a >>= 7;
		printf("%d",a);
	}
	
	printf("\n");
	
	return 0;
}
