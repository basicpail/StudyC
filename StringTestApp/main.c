/*
  filename - main.c
  version - 1.0
  description - �⺻ ���� �Լ�
  --------------------------------------------------------------------------------
  first created - 2020.02.01
  writer - Hugo MG Sung.
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// �����Լ�
int main(void) 
{
    char str1[80], str2[80];
    char temp[80];

    printf("�� ���ڿ� �Է�:");
    scanf("%s %s, str1, str2");
    printf("�ٲٱ� ��: %s, %s\n", str1, str2);
    strcpy(temp, str1); strcpy(str1, str2); strcpy(str2, temp);
    printf("�ٲ� �� : %s, %s\n", str1, str2);

    /*char str[80];

    printf("���ڿ� �Է�: ");
    gets(str);
    printf("���ڿ� ���: ");
    puts(str);
    printf("�ٸ� ���� \n");*/
    /*char str1[80] = "cat";
    char str2[80];

    strcpy(str1, "tiger");
    strcpy(str2, str1);
    printf("%s %s \n", str1, str2);*/
    /*char str[80] = "applejam";
    int res;

    printf("���� : %s\n", str);
    printf("���ڿ� �Է�:");
    res = scanf("%s", str);
    printf("�Է� �� ���ڿ�: %s\n", str);
    
    return 0;*/
	system("pause");
	return EXIT_SUCCESS;
}