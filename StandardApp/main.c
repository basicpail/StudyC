/*
  filename - main.c
  version - 1.0
  description - �⺻ ���� �Լ�, ��ó�� �н�
  --------------------------------------------------------------------------------
  first created - 2020.02.10
  writer - SG S.
*/

#include <stdio.h>
#include <stdlib.h>
#include<string.h>
#include"Student.h"

// �����Լ�
int main(void) 
{
    Student s1 = { 315, "ȫ�浿" };
    printf("%d, %s\n", s1.num, s1.name);

	system("pause");
	return EXIT_SUCCESS;
}