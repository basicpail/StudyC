/*
  filename - main.c
  version - 1.0
  description - �⺻ ���� �Լ�
  --------------------------------------------------------------------------------
  first created - 2020.02.01
  writer - Hugo MG Sung.
*/

#include <stdio.h>
#include <stdlib.h>
#include<string.h>

#define VER 7
#define BIT16

int main(void) 
{
    int max;

#if VER >= 6
    printf("���� %d�Դϴ�\n", VER);
#endif

#ifdef BIT16
    max = 32767;
#else
    max = 2147483647;
#endif
    printf("int�� ������ �ִ밪: %d\n", max);

	system("pause");
	return EXIT_SUCCESS;
}