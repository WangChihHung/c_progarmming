/****************/
/* 問題09 課題4 */
/****************/

#include <stdio.h>

typedef struct SYOUHIN{
	char s_no[6];
	char s_name[21];
	int s_price;
}LIST;

void init_array(LIST*,LIST**,int);
void input_syouhin_array(LIST**,int);
void disp_syouhin_array(LIST**,int);

int main(void)
{
	
	LIST *dat_array_p[5];
	LIST dat[5];
	int i;
	
	for(i=0;i<5;i++)
		init_array(&dat[i],dat_array_p,i);
	
	for(i=0;i<5;i++)
		input_syouhin_array(dat_array_p,i);
	
	for(i=0;i<5;i++)
		disp_syouhin_array(dat_array_p,i);
	
	return 0;
}

void init_array(LIST *dat,LIST **top,int i)
{
	*(top+i) = dat;
}

void input_syouhin_array(LIST **top,int i)
{
	printf("\商品番号-->");
	scanf("%s",(*(top+i))->s_no);
	
	printf("商品名-->");
	scanf("%s",(*(top+i))->s_name);
	
	printf("単価-->");
	scanf("%d",&(*(top+i))->s_price);
}

void disp_syouhin_array(LIST **top,int i)
{
	
	printf("\n商品番号:%s\n商品名:%s\n単価:%d\n",(*(top+i))->s_no
												,(*(top+i))->s_name
												,(*(top+i))->s_price);
	
}

