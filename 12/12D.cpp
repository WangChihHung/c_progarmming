/*課題12D*/
#include <stdio.h>
#include <string.h>


int main(void)
{
	FILE *FPname;
	char name[30];
	
	FPname = fopen("kadai12D.txt","w");
	if(FPname == NULL)
		return 1;
	
	printf("名前入力(終了はEND)-->");
	scanf("%s",name);
	
	while((strcmp(name,"END"))!=0)
	{
		fprintf(FPname,"%s\n",name);
		printf("名前入力(終了はEND)-->");
		scanf("%s",name);
	}
	
	
	fclose(FPname);
	
	return 0;
}
