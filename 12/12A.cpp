/*課題12A*/
#include <stdio.h>

void input(FILE *file,int *number,char *string);
int main(void)
{
	int dat;
	char str[5];
	FILE *fpw;
	
	fpw = fopen("Z:\\c1\\ensyu\\12\\Kadai12A.txt","w");
	if(fpw == NULL)
	{
		printf("エラー\n");
		return 1;
	}
	input(fpw,&dat,str);
	
	printf("\n");
	
	input(fpw,&dat,str);
	
	fclose(fpw);
	
	
	return 0;
}
void input(FILE *file,int *number,char *string)
{
	printf("整数データ-->");
	scanf("%d",&number);
	
	printf("文字列データ-->");
	scanf("%s",string);
	
	fprintf(file,"%d %s\n",number,string);
}