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

// �����Լ�
int main(void) 
{
    int a = 1;
    
    while (a < 10)
    {
        if (a >= 10) {
            break;
        }
        a *= 2;
        printf("a = %d\n", a);
    }
	system("pause");
	return EXIT_SUCCESS;
}