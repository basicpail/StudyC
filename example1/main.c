/*
  filename - main.c
  version - 1.0
  description - 기본 메인 함수
  --------------------------------------------------------------------------------
  first created - 2020.02.13
  writer - SG S.
*/

#include <stdio.h>
#include <stdlib.h>

// 메인함수
int main(void) 
{
    int i ;
    int sum = 0;

    for (int i = 0; i <= 300; i++)
    {
        if ((i % 3) == 0)
        {
            sum = sum + i;
        }

    }
    printf("300까지 3의 배수의 합: %d\n", sum);
	system("pause");
	return EXIT_SUCCESS;
}