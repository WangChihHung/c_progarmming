/*Lesson 13D */
#include <stdio.h>

void enter_data(char*,char*);
void print_binary(unsigned char*);
void operate(unsigned char*,char*,char*);

int main(void)
{
	unsigned char origin=0;
	char keta,number;
	
	print_binary(&origin);
	
	enter_data(&keta,&number);
	
	printf("order:%d\tnumber:%d\n",keta,number);
	
	while(keta>=0||number>=0)
	{
		operate(&origin,&keta,&number);
			
		print_binary(&origin);
		
		enter_data(&keta,&number);
		
	}
	
	
	return 0;
}

void enter_data(char *bit,char *set)
{
	printf("Enter order(<8),number(0or1):");
	scanf("%d,%d",bit,set);
	printf("--order:%d\tnumber:%d\n",*bit,*set);
	
}
void print_binary(unsigned char *bitdata)
{
	char i;
	unsigned char temp;
	
	temp = *bitdata;
	printf("binary:");
	
	for(i=0;i<8;i++)
	{
		*bitdata = temp;
		*bitdata <<= i;
		*bitdata >>= 7;
		printf("%d",*bitdata);
	}
	
	*bitdata = temp;
	printf("\n");
	
}
void operate(unsigned char *bitdata,char *bit,char *set)
{
	unsigned char mask=1;
	printf("order:%d\tnumber:%d\n",*bit,*set);
	
		if(*set == 0)
		{
			mask <<= *bit;
			mask = ~mask;
			*bitdata &= mask;
		}
		else if(*set == 1)
		{
			mask <<= *bit;
			*bitdata |= mask;
		}
	
	
}
