/*
  filename - main.c
  version - 1.0
  description - �⺻ ���� �Լ�
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
    printf("�й� �Է�");
    scanf("%d", &num);
    
    a= getchar();

    printf("���� �Է�:");
    grade = getchar();
    printf("�й�: %d, ����:%s\n", num, grade);
    /*char str[20];

    printf("���ڿ� �Է��ϼ���:");
    
    mygets(str, sizeof(str));
    
    printf("�Է��� ���ڿ�: %s\n",str);*/

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
