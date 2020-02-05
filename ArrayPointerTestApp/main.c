/*
  filename - main.c
  version - 1.0
  description - 기본 메인 함수
  --------------------------------------------------------------------------------
  first created - 2020.02.04
  writer - SG S.
*/

#include <stdio.h>
#include <stdlib.h>

    void print_ary(int* pa, int size);
// 메인함수
int main(void) 
{
    int ary[5] = { 10, 20, 30, 40, 50 };
    int ary2[7] = { 10, 20, 30, 40, 50, 60, 70 };
    int size = 0;

    size = sizeof(ary) / sizeof(ary[0]);
    printf("%d\n", sizeof(ary[0]));
    printf("%d\n", sizeof(ary));
    printf("%d\n", size);
    print_ary(ary, size); 
    size = sizeof(ary2) / sizeof(ary2[0]);
    print_ary(ary2, size);

    
    
    /*int ary[4] = { 10, 20 ,30,40 };
    int* pa = ary;
    int i;

    printf("%d\n", ary);
    printf("%d\n", ary+1);
    printf("%d\n", &ary);
    printf("%d\n", &ary+1);
    printf("%d\n", *ary);
    printf("%d\n", pa);
    printf("%d\n", &pa);
    printf("%d\n", *(pa+1));
    printf("%d\n", *pa);*/



    //printf("배열의 값: ");
    //for (i = 0; i < 3; i++)
    //{
    //    printf("%d", *pa); //*(pa + i);
    //    //printf("%d\n", pa)
    //    pa++;
    //}

    //int ary[3] = { 0 };
    //int i;

    //*(ary + 0) = 10;
    //*(ary + 1) = *(ary + 0) = 10;

    //printf("세번째 요소 입력:");
    //scanf("%d", (ary + 2));

    ////for (int i =0 ;i < (sizeof(ary)/ sizeof(ary[0])) ;i ++)
    //  for(int i = 0; i<3; i++)
    //{
    //    printf("%5d", *(ary + i));
    //}

	system("pause");
	return EXIT_SUCCESS;
}


void print_ary(int* pa, int size)
{
    int i;

    for (i = 0; i < size; i++)
    {
        printf("%5d", *(pa+i));
    }
    printf("\n");
}
