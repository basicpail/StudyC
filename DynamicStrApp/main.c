/*
  filename - main.c
  version - 1.0
  description - 기본 메인 함수, 동적 할당 저장공간의 활용
  --------------------------------------------------------------------------------
  first created - 2020.02.07
  writer - SG S.
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// 메인함수
int main(void) 
{   
    char temp[80];
    char* str[21] = { 0 };
    int i = 0;

    while (i < 20)
    {
        printf("문자열을 입력하세요 :");
        gets(temp);
        if (strcmp(temp, "end") == 0) break;
        str[i] = (char*)malloc(strlen(temp) + 1);
        strcpy(str[i], temp);
        i++;
    }
    /*char temp[80];
    char* str[3];

    for (int i = 0; i < 3; i++)
    {
        printf("문자열 입력:");
        gets(temp);
        str[i] = (char*)malloc((strlen(temp)) + 1);
        strcpy(str[i], temp);
    }
    for (int i = 0; i < 3; i++)
    {
        printf("%s\n", str[i]);
    }
    for (int i = 0; i < 3; i++)
    {
        free(str[i]);
    }*/
	
    system("pause");
	return EXIT_SUCCESS;
}