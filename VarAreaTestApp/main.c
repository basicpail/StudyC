/*
  filename - main.c
  version - 1.0
  description - 기본 메인 함수, 변수의 영역과 데이터 공유
  --------------------------------------------------------------------------------
  first created - 2020.02.05
  writer - SG S
*/

#include <stdio.h>
#include <stdlib.h>

void assign10(void);
void assign20(void);

int a ;
// 메인함수
int main(void) 
{
    printf("함수 호출 전a의 값: %d\n", a);
    
    assign10();
    assign20();

    printf("함수 호출 후 a값: %d\n", a);
    /*auto int a = 0;
    assign();
    printf("a의 값 : %d \n", a);

	system("pause");
	return EXIT_SUCCESS;*/
}

void assign10(void) 
{
    a = 10;
}

void assign20(void)
{
    
    int a ;
    a = 20;
}

void assign(void)
{

}