/****************/
/* 問題07 課題3 */
/****************/

#include <stdio.h>
#include <stdlib.h>

typedef struct SYOHINLIST
{
	char s_no[6];
	char s_name[21];
	int s_price;
	struct SYOHINLIST *s_next;
}LIST;

LIST *new_list(void);
int input_list(LIST*);
void free_list(LIST*);

int main(void)
{
	LIST *top,*now;
	
	top = new_list();
	
	free_list(top);
	
	
	return 0;
}

LIST *new_list(void)
{
	LIST *dat;
	dat = (LIST *)malloc(sizeof(LIST));
	
	if(input_list(dat)!=EOF)
		dat->s_next = new_list();
	
	dat->s_next = NULL;
	
	return dat;
}

int input_list(LIST *in)
{
	int rtn;
	
	printf("商品番号-->");
	rtn = scanf("%s",in->s_no);
	if(rtn != EOF)
	{
		printf("商品名-->");
		scanf("%s",in->s_name);
		printf("単価-->");
		scanf("%d",in->s_price);
	}
	
	return rtn;
}
void free_list(LIST *p)
{
	LIST *now;
	
	while(p != NULL)
	{
		now = p->s_next;
		free(p);
		p = now;
	}
	
}
