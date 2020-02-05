/*
  filename - main.c
  version - 1.0
  description - 기본 메인 함수, 문자 학습
  --------------------------------------------------------------------------------
  first created - 2020.02.04
  writer - SG S.
*/

#include <stdio.h>
#include <stdlib.h>

// 메인함수
int main(void) 
{
    int num, grade;
    
    printf("학번 입력:");
    scanf("%d", &num);
    getchar();
    printf("학점 입력");
    grade = getchar();

    printf("학번 : %d, 학점: %c \n", num, grade);
 
    
    /*   int res;
    char ch;
    
    while (1)
    {
        res = scanf("%u", &ch);
        if (res == -1) { break; }
        printf("%c ", ch);
    }*/
    //char ch;

    //for (int i =0; i < 3; i++)
    //{
    //    scanf("%c", &ch);
    //    printf("%c", ch);
    //}
    /* char ch1, ch2;
    scanf("%c%c", &ch1,&ch2);
    printf("[%c %c]", ch1, ch2);
    */
    /*char small, cap = 'H';

    if ((cap >= 'A') && (cap <= 'Z'));
    {
        small = cap + ('a' - 'A');
    }

    printf("대문자: %c %c ",cap,'\n');
    printf("소문자: %c",small);*/
	system("pause");
	return EXIT_SUCCESS;
}