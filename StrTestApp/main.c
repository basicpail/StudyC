/*
  filename - main.c
  version - 1.0
  description - �⺻ ���� �Լ�, ���ڿ� �н�
  --------------------------------------------------------------------------------
  first created - 2020.02.05
  writer - Hugo MG Sung.
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// �����Լ�
int main(void) 
{
    /*char str[2];
    int ch;
    char* ps = str;
    ch = *ps;

    str[0] = ch;
    ch = getchar();
    printf("%s", str);*/


    /*char str1[80], str2[80];

    while (1) {
        printf("������ ���� ������ ���� �̸�:");
        scanf("%s%s", str1, str2);
        if ((str1[0] == 'X') || (str2[0] =='X')) break;
        
        if (strcmp(str2, str1) > 0)
        {
            printf("%s\n", str1);
        }
        else printf("%s\n", str2);
    }*/

    /*char str1[80], str2[80];
    char* resp;

    printf("�ΰ��� �����̸� �Է�:");
    scanf("%s%s", str1, str2);
    if (strlen(str1) > strlen(str2))
        resp = str1;
    else
        resp = str2;
    printf("�̸��� �� ������: %s\n", resp);*/


    /*char str[80] = "straw";

    strcat(str, "berry");
    printf("%s\n", str);
    strncat(str, "piece", 3);
    printf("%s\n", str);*/
    
    
    /*char str[20] = "mango tree";

    strncpy(str, "apple-pie", 5);
    printf("%s\n", str);*/




    ///char str1[80] = "strawberry";
    //char str2[80] = "apple";
    //char* ps1 = "banana";
    //char* ps2 = str2;

    //printf("����: %s\n", str1);
    //strcpy(str1, str2);
    //printf("�ٲ� ���ڿ�: %s\n", str1);

    //strcpy(str1, ps1);
    //printf("�ٲ� ���ڿ�: %s\n", str1);
    //
    //strcpy(str1, ps2);
    //printf("�ٲ� ���ڿ�: %s\n", str1);
    //
    //strcpy(str1, "banana");
    //printf("�ٲ� ���ڿ�: %s\n", str1);
    
   



    /**char str[80] = "apple juice";
    char* ps = "banana";

    puts(str);
    fputs(ps, stdout);
    puts("jam");*/




    /*int age;
    char name[20];

    printf("���� �Է�:");
    scanf("%d", &age);
    getchar();
    printf("�̸� �Է�:");
    gets(name);
    printf("����:%d, �̸�: %s\n", age, name);*/





    /*char str[80];
    printf("������ ���Ե� ���ڿ� �Է�:");
    fgets(str, sizeof(str), stdin);
    printf("�Է��� ���ڿ�:%s", str);
    */
    /*char str[80];

    printf("���ڿ� �Է�:");
    scanf("%s", str);
    printf("ù��° �ܾ� : %s\n", str);
    scanf("%s", str);
    printf("���� ���� �ܾ�: %s\n", str);*/
    /*char* dessert = "apple";

    printf("���� �Ľ��� %s �Դϴ�. \n", dessert);
    dessert = "banana";
    printf("���� �Ľ��� %s �Դϴ�. \n", dessert);*/

  
    
    
    
    
    /*char fruit[80] = "apple";
    
    printf("apple�� �����ּ�: %p \n","apple" );
    printf("apple�� �ι�° �����ּ�: %p \n", "apple"+1);
    printf("apple�� ù��° ����: %c \n", *"apple");
    printf("apple�� �ι�° ����: %c \n", *("apple" +1));
    printf("apple�� ����° ����: %c \n", "apple"[3]);
    printf("fruit�� �����ּ�:%p \n", fruit);
    printf("fruit�� �����ּ�:%s \n", fruit);
	*/
	system("pause");
	return EXIT_SUCCESS;
}