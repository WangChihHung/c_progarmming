/*課題01D*/
#include <stdio.h>

int main(void)
{
	char a;
	double b;
	int c;
	
	printf("あなたのイニシャル-->");
	scanf("%c",&a);
	
	printf("あなたの身長-->");
	scanf("%lf",&b);
	
	printf("今日の日付-->");
	scanf("%d",&c);
	
	printf("\n");
	
	printf("イニシャル:%c\n身長:%fcm\n今日の日付:%d日\n",a,b,c);
	
	return 0;
}