/*‰Û‘è01H*/
#include <stdio.h>
//文字化けしすぎぃ
int main(void)
{
	double a;
	int b;
		
	printf("ŽÀ”“ü—Í-->");
	scanf("%lf",&a);
	
	a=a+0.5;
	b=(int) a;
	
	printf("ŽlŽÌŒÜ“üŒã:%d\n",b);
	
	return 0;
}
