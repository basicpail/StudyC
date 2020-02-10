/*
  filename - main.c
  version - 1.0
  description - 기본 메인 함수 , 공용체 학습
  --------------------------------------------------------------------------------
  first created - 2020.02.010
  writer - SG S.
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

enum season{SPR, SUM, FAL, WIN};

int main(void) 
{
    enum season ss;
    char* pc = NULL;

    ss = spring;

    switch (ss)
    {
    case SPR:
        break;
    case SUM:
        break;
    case FAL:
        break;
    case WIN:
        break;
    default:
        break;
    }
	system("pause");
	return EXIT_SUCCESS;
}