/*課題01H*/
#include <stdio.h>

int main(void)
{
	double a;
	int b;
		
	printf("実数入力-->");
	scanf("%lf",&a);
	
	a=a+0.5;
	b=(int) a;
	
	printf("四捨五入後:%d\n",b);
	
	return 0;
}