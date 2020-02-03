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
#include <string.h>

// 메인함수
int main(void) 
{
    char str1[80], str2[80];
    char temp[80];

    printf("두 문자열 입력:");
    scanf("%s %s, str1, str2");
    printf("바꾸기 전: %s, %s\n", str1, str2);
    strcpy(temp, str1); strcpy(str1, str2); strcpy(str2, temp);
    printf("바꾼 후 : %s, %s\n", str1, str2);

    /*char str[80];

    printf("문자열 입력: ");
    gets(str);
    printf("문자열 출력: ");
    puts(str);
    printf("다른 문장 \n");*/
    /*char str1[80] = "cat";
    char str2[80];

    strcpy(str1, "tiger");
    strcpy(str2, str1);
    printf("%s %s \n", str1, str2);*/
    /*char str[80] = "applejam";
    int res;

    printf("최초 : %s\n", str);
    printf("문자열 입력:");
    res = scanf("%s", str);
    printf("입력 후 문자열: %s\n", str);
    
    return 0;*/
	system("pause");
	return EXIT_SUCCESS;
}