#include<stdio.h>
#include<unistd.h>
#include<string.h>

#define MAX_BUFF_LEN 512
#define MAIN_PRINT(format,...)\
	do{\
		printf("lshell>"format,##__VA_ARGS__);\
	}while(0)
int main(int argc,char **argv)
{
	char input_buff[MAX_BUFF_LEN]={0};
	char ch= 0;
	int loop_index= 0;
	while(1)
	{
		MAIN_PRINT();
		loop_index= 0;
		memset(input_buff,0,MAX_BUFF_LEN);
		while((ch=getchar())!= '\n')
		{	
			input_buff[loop_index]= ch;
			loop_index++ ;
		}
	}
	return 0 ;
}
