/*‰Û‘è01F*/
#include <stdio.h>

int main(void)
{
	int a,b,c;
	double d;
	
	printf("‰È–Ú‚P‚Ì“_”-->");
	scanf("%d",&a);
	
	printf("‰È–Ú‚Q‚Ì“_”-->");
	scanf("%d",&b);
	printf("\n");
	
	c=a+b;
	d=(double)(a+b)/2;
	
	printf("‚Q‰È–Ú‚Ì‡Œv:%d\n‚Q‰È–Ú‚Ì•½‹Ï:%lf\n",c,d);
	
	return 0;
}