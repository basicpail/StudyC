/*
  filename - main.c
  version - 1.0
  description - 기본 메인 함수
  --------------------------------------------------------------------------------
  first created - 2020.02.01
  writer - Hugo MG Sung.
*/

#include <stdio.h>
#include <stdlib.h>

//int factorial(int count);
//
//// 메인함수
//int main(void) 
//{
//    int result = factoral(5);
//    printf("result = %d\n", result);
//	system("pause");
//	return EXIT_SUCCESS;
//}
//
//int factorial(int count)
//{
//    if (count == 1) { return 1; }
//
//    return count * factoral(count - 1);
//}

void fruit(int count);

int main(void)
{
    fruit(1);

    return 0;
}

void fruit(int count)
{
    printf("apple\n");
    if (count == 3) return;
    fruit(count + 1);
    printf("jam\n");
}