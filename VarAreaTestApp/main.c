/*
  filename - main.c
  version - 1.0
  description - �⺻ ���� �Լ�, ������ ������ ������ ����
  --------------------------------------------------------------------------------
  first created - 2020.02.05
  writer - SG S
*/

#include <stdio.h>
#include <stdlib.h>

void assign10(void);
void assign20(void);

int a ;
// �����Լ�
int main(void) 
{
    printf("�Լ� ȣ�� ��a�� ��: %d\n", a);
    
    assign10();
    assign20();

    printf("�Լ� ȣ�� �� a��: %d\n", a);
    /*auto int a = 0;
    assign();
    printf("a�� �� : %d \n", a);

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