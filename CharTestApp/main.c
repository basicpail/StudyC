/*
  filename - main.c
  version - 1.0
  description - �⺻ ���� �Լ�, ���� �н�
  --------------------------------------------------------------------------------
  first created - 2020.02.04
  writer - SG S.
*/

#include <stdio.h>
#include <stdlib.h>

// �����Լ�
int main(void) 
{
    int num, grade;
    
    printf("�й� �Է�:");
    scanf("%d", &num);
    getchar();
    printf("���� �Է�");
    grade = getchar();

    printf("�й� : %d, ����: %c \n", num, grade);
 
    
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

    printf("�빮��: %c %c ",cap,'\n');
    printf("�ҹ���: %c",small);*/
	system("pause");
	return EXIT_SUCCESS;
}