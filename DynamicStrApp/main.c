/*
  filename - main.c
  version - 1.0
  description - �⺻ ���� �Լ�, ���� �Ҵ� ��������� Ȱ��
  --------------------------------------------------------------------------------
  first created - 2020.02.07
  writer - SG S.
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// �����Լ�
int main(void) 
{   
    char temp[80];
    char* str[21] = { 0 };
    int i = 0;

    while (i < 20)
    {
        printf("���ڿ��� �Է��ϼ��� :");
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
        printf("���ڿ� �Է�:");
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