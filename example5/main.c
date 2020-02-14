/*
  filename - main.c
  version - 1.0
  description - 기본 메인 함수
  --------------------------------------------------------------------------------
  first created - 2020.02.14
  writer - SG S.
*/

#include <stdio.h>
#include <stdlib.h>

//void mygets(char* str, int* size);

int main(void) 
{
    int a;
    int num, grade;
    printf("학번 입력");
    scanf("%d", &num);
    
    a= getchar();

    printf("학점 입력:");
    grade = getchar();
    printf("학번: %d, 학점:%s\n", num, grade);
    /*char str[20];

    printf("문자열 입력하세요:");
    
    mygets(str, sizeof(str));
    
    printf("입력한 문자열: %s\n",str);*/

	system("pause");
	return EXIT_SUCCESS;
}
//
//void mygets(char* str, int size)
//{
//    int ch;
//    int i = 0;
//
//    ch = getchar();
//    while ((ch != '\n') && (i < size - 1))
//    {
//        str[i] = ch;
//        i++;
//        ch = getchar();
//    }
//    str[i] = '\0';
//}
