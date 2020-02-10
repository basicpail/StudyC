/*
  filename - main.c
  version - 1.0
  description - 기본 메인 함수, 전처리 학습
  --------------------------------------------------------------------------------
  first created - 2020.02.10
  writer - SG S.
*/

#include <stdio.h>
#include <stdlib.h>
#include<string.h>
#include"Student.h"

// 메인함수
int main(void) 
{
    Student s1 = { 315, "홍길동" };
    printf("%d, %s\n", s1.num, s1.name);

	system("pause");
	return EXIT_SUCCESS;
}