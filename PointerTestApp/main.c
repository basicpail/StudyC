/*
  filename - main.c
  version - 1.0
  description - 기본 메인 함수 / 포인터 공부
  --------------------------------------------------------------------------------
  first created - 2020.02.04
  writer - SGS.
*/

#include <stdio.h>
#include <stdlib.h>

// 메인함수
int main(void) 
{
    /*int a = 10;
    int* pa = &a;
    double* pd = pa;

    printf("a : %d\n", a);
    printf("pa : %d\n", *pa);
    printf("pd : %lf\n", *pd);*/





    int a=10, b = 20;
    int* pa = &b;
    int c;

    *pa = a;

    

    printf("변수 a의 주소: %d\n", &a);
    printf("변수 a의 주소': %d\n", pa);
    printf("변수 a: %d\n", &pa);
    printf("변수 a의 값: %d\n", *pa);
    c = &b;
    printf("변수 b의 값: %d\n", c);
    pa = &b;
    printf("변수 b의 값: %d\n", *pa);
    pa = &a;
    a = 30;
    printf("a의 값: %d\n", *pa);

    
    
    /*int a = 10, b = 20, total;
    double avg;
    int* pa, * pb;
    int* pt = &total;
    double* pg = &avg;

    pa = &a;
    pb = &b;
    *pt = *pa + *pb;
    *pg = *pt / 2.0;

    printf("두 정수의 값 : %d, %d\n", *pa, *pb);
    printf("두 정수의 합: %d\n", * pt);
    printf("두 정수의 평균 : %.1lf\n", *pg);
    printf("%d %d\n", pa, pb);*/



    //int a = 0;
    //int* pa;

    //pa = &a;

    //scanf("%d", pa);
    //printf("%d\n", a);
    
  /*  int a;
    int* pa;
    int b;

    pa = &a;
    *pa = 10;
    b = &a;

    printf("a의 주소: %d\n", &a);
    printf("pa의 값: %u\n", pa);
    printf("pa의 주소: %u\n", &pa);
    printf("포인터로 a값: %d\n", *pa);
    printf("변수명으로 a값 출력: %d\n", a);
    printf("b: %u\n", b);*/
    

    /*int a = 0;
    double b = 0;
    char c = 65;

    printf("a의 주소: %u\n", &a);
    printf("b의 주소: %u\n", &b);
    printf("c의 주소: %u\n", &c);*/
	
    system("pause");
	return EXIT_SUCCESS;
}