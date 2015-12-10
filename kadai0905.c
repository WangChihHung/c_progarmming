/****************/
/* 問題09 課題5 */
/****************/

#include <stdio.h>
#include <stdlib.h>

typedef struct SYOUHIN{
	char s_no[6];
	char s_name[21];
	int s_price;
}LIST;

/*void init_array(LIST*,LIST**,int);*/
void input_syouhin_array(LIST**,int);
void disp_syouhin_array(LIST**);
LIST *malloc_input_syouhin(void);
void free_syouhin(LIST**);

int main(void)
{
	LIST **dat;
	input_syouhin_array(dat,5);
	disp_syouhin_array(dat);
	free_syouhin(dat);
	
	return 0;
}

/**************************************/
/*******  ここから副プログラム  *******/
/**************************************/

/*******  １つデータの空間を確保  *******/

LIST *malloc_input_syouhin(void)
{
	LIST *new_data;
	
	new_data = (LIST*)malloc(sizeof(LIST));
	
	return new_data;
}

/*
void init_array(LIST *dat,LIST **top,int i)
{
	*(top+i) = dat;
}
*/
/*******  データの入力  *******/

void input_syouhin_array(LIST **top,int max)
{
	int i=0;
	
	LIST *new_data;
	
	new_data = malloc_input_syouhin();
	
	while(printf("\商品番号-->"),scanf("%s",new_data->s_no) != EOF && i <= max)
	{
		
		printf("商品名-->");
		scanf("%s",new_data->s_name);
		
		printf("単価-->");
		scanf("%d",&new_data->s_price);
		
		*(top+i) = new_data;
		i++;
		
		new_data = malloc_input_syouhin();
	}
	
	new_data = NULL;
	
}

/*******  データのプリント  *******/

void disp_syouhin_array(LIST **top)
{
	while(*top != NULL)
	{
		printf("\n商品番号:%s\n商品名:%s\n単価:%d\n",(*top)->s_no
													,(*top)->s_name
													,(*top)->s_price);
		top++;
	}
}

/*******  すべて確保した領域を解放する  *******/

void free_syouhin(LIST **top)
{
	while(*top != NULL)
	{
		free(*top);
		top++;
	}
	
}
