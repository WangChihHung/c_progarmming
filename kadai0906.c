/****************/
/* 問題09 課題6 */
/****************/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX 5

typedef struct SYOUHIN{
	char s_no[6];
	char s_name[21];
	int s_price;
}LIST;


void input_syouhin_array(LIST**);
void disp_syouhin_array(LIST**);
LIST *malloc_input_syouhin(void);
void free_syouhin(LIST**);

int main(void)
{
	LIST **dat;
	LIST *data[MAX+1];
	dat = &*data;
	input_syouhin_array(dat);
	disp_syouhin_array(dat);
	free_syouhin(dat);
	
	return 0;
}

/**************************************/
/*******  ここから副プログラム  *******/
/**************************************/

/*******  １つデータの空間の確保と入力  *******/

LIST *malloc_input_syouhin(void)
{
	LIST *new_data;
	char temp_no[6];
	
	new_data = NULL;
	
	if(printf("\商品番号-->"),scanf("%s",temp_no) != EOF)
	{
		new_data = (LIST*)malloc(sizeof(LIST));
		
		strcpy(new_data->s_no,temp_no);
		
		printf("商品名-->");
		scanf("%s",new_data->s_name);
		
		printf("単価-->");
		scanf("%d",&new_data->s_price);
		
	}
	
	
	return new_data;
}


/*******  データの入力準備  *******/

void input_syouhin_array(LIST **top)
{
	int i=0;
	
	while( i < MAX && (*(top+i) = malloc_input_syouhin()) != NULL   )
		i++;
	
	
	*(top+i)= (i == MAX)? NULL : *(top+i);
	
}

/*******  データのプリント  *******/

void disp_syouhin_array(LIST **top)
{
	int i=0;
	while(*(top+i) != NULL)
	{
		printf("\n商品番号:%s\n商品名:%s\n単価:%d\n",(*(top+i))->s_no
													,(*(top+i))->s_name
													,(*(top+i))->s_price);
		i++;
	}
}

/*******  すべて確保した領域を解放する  *******/

void free_syouhin(LIST **top)
{
	int i=0;
	while(*(top+i) != NULL)
	{
		free(*(top+i));
		i++;
	}
	
}
