/*
  filename - main.c
  version - 1.0
  description - �⺻ ���� �Լ� / ������ ����
  --------------------------------------------------------------------------------
  first created - 2020.02.04
  writer - SGS.
*/

#include <stdio.h>
#include <stdlib.h>

// �����Լ�
int main(void) 
{
    int a = 10;
    int* pa = &a;
    double* pd = pa;

    printf("a : %d\n", a);
    printf("pa : %d\n", *pa);
    printf("pd : %lf\n", *pd);
    //int a=10, b = 20;
    //const int* pa = &a;
    //int c;

    //printf("���� a�� �ּ�: %d\n", &a);
    //printf("���� a�� �ּ�': %d\n", pa);
    //printf("���� a: %d\n", &pa);
    //printf("���� a�� ��: %d\n", *pa);
    //c = &b;
    //printf("���� b�� ��: %d\n", c);
    //pa = &b;
    //printf("���� b�� ��: %d\n", *pa);
    //pa = &a;
    //a = 30;
    //printf("a�� ��: %d\n", *pa);

    
    
    /*int a = 10, b = 20, total;
    double avg;
    int* pa, * pb;
    int* pt = &total;
    double* pg = &avg;

    pa = &a;
    pb = &b;
    *pt = *pa + *pb;
    *pg = *pt / 2.0;

    printf("�� ������ �� : %d, %d\n", *pa, *pb);
    printf("�� ������ ��: %d\n", * pt);
    printf("�� ������ ��� : %.1lf\n", *pg);
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

    printf("a�� �ּ�: %d\n", &a);
    printf("pa�� ��: %u\n", pa);
    printf("pa�� �ּ�: %u\n", &pa);
    printf("�����ͷ� a��: %d\n", *pa);
    printf("���������� a�� ���: %d\n", a);
    printf("b: %u\n", b);*/
    

    /*int a = 0;
    double b = 0;
    char c = 65;

    printf("a�� �ּ�: %u\n", &a);
    printf("b�� �ּ�: %u\n", &b);
    printf("c�� �ּ�: %u\n", &c);*/
	
    system("pause");
	return EXIT_SUCCESS;
}