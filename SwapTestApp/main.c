/*
  filename - main.c
  version - 1.0
  description - �⺻ ���� �Լ� , Swap �׽�Ʈ
  --------------------------------------------------------------------------------
  first created - 2020.02.04
  writer - Hugo MG Sung.
*/

#include <stdio.h>
#include <stdlib.h>

void Swap(int *pa, int *pb);
// �����Լ�
int main(void)
{
    int a = 15;
    int b = 24;
    Swap(&a, &b);

    printf("a : %d , b: %d\n", a, b);

    system("pause");
    return EXIT_SUCCESS;
}

void Swap(int *pa, int *pb)
{
    int temp;
    temp = *pa;
    *pa = *pb;
    *pb = temp;
}
//void Swap(int pa, int pb);
//// �����Լ�
//int main(void) 
//{
//    int a = 15;
//    int b = 24;
//    Swap(a, b);
//
//    printf("a : %d , b: %d\n",a, b);
//
//	system("pause");
//	return EXIT_SUCCESS;
//}
//
//void Swap (int pa, int pb);
//{
//    int temp;
//    temp = pa;
//    pa = pb;
//    pb = temp;
//}