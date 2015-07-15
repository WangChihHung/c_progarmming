/*‰Û‘è12B*/
#include <stdio.h>
void read(FILE *file,int *data,char *string);
int main(void)
{
	int dat;
	char str[5];
	FILE *fpr;
	
	fpr=fopen("Z:\\c1\\ensyu\\12\\Kadai12A.txt","r");
	
	if(fpr == NULL)
	{
		printf("ƒGƒ‰[\n");
		return 1;
	}
	printf("®” •¶š—ñ\n");
	
	read(fpr,&dat,str);
	read(fpr,&dat,str);
	
	fclose(fpr);
	
	return 0;
}

void read(FILE *file,int *data,char *string)
{
	fscanf(file,"%d %s",&data,string);
	printf("%4d %s\n",data,string);
}