/*
  filename - main.c
  version - 1.0
  description - 기본 메인 함수, 헤더 중복제거 학습
  --------------------------------------------------------------------------------
  first created - 2020.02.11
  writer - SG S.
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include"point.h"
#include"line.h"

// 메인함수
int main(void) 
{
    Line a = { {1,2},{5,6} };
    Point b;

    b.x = (a.first.x + a.second.x) / 2;
    b.y = (a.first.y + a.second.y) / 2;
	system("pause");
	return EXIT_SUCCESS;
}