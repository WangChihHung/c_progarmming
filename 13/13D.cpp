/*Lesson 13D */
#include <stdio.h>

int main(void)
{
	unsigned char a=0,b=0,d,i;
	char set,bit;
	
	printf("binary:");
	for(i=0;i<8;i++)
	{
		a=b;
		a <<= i;
		a >>= 7;
		printf("%d",a);
	}
	
	printf("\nEnter: whitch bit,set(0or1):");
	
	scanf("%d,%d",&bit,&set);
	
	while(bit>=0||set>=0)
	{
		d=1;
		if(set == 0)
		{
			d <<= bit;
			d = ~d;
			a &= d;
		}
		else if(set == 1)
		{
			d <<= bit;
			a |= d;
		}
			
		b=a;
		
		printf("binary:");
		for(i=0;i<8;i++)
		{
			a=b;
			a <<= i;
			a >>= 7;
			printf("%d",a);
		}
		a=b;
		printf("\nEnter: whitch bit,set(0or1):");
		
		scanf("%d,%d",&bit,&set);
		
	}
	
	
	return 0;
}

