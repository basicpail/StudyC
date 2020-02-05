/*
  filename - main.c
  version - 1.0
  description - 기본 메인 함수, 문자열 학습
  --------------------------------------------------------------------------------
  first created - 2020.02.05
  writer - Hugo MG Sung.
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
void my_gets(char* str, int size);
// 메인함수
int main(void) 
{
    char str[7];

    my_gets(str, sizeof(str));
    printf("입력한 문자열 : %s\n", str);
    
    /*char str[2];
    int ch;
    char* ps = str;
    ch = *ps;

    str[0] = ch;
    ch = getchar();
    printf("%s", str);*/


    /*char str1[80], str2[80];

    while (1) {
        printf("사전에 먼저 나오는 과일 이름:");
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

    printf("두개의 과일이름 입력:");
    scanf("%s%s", str1, str2);
    if (strlen(str1) > strlen(str2))
        resp = str1;
    else
        resp = str2;
    printf("이름이 긴 과일은: %s\n", resp);*/


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

    //printf("최초: %s\n", str1);
    //strcpy(str1, str2);
    //printf("바뀐 문자열: %s\n", str1);

    //strcpy(str1, ps1);
    //printf("바뀐 문자열: %s\n", str1);
    //
    //strcpy(str1, ps2);
    //printf("바뀐 문자열: %s\n", str1);
    //
    //strcpy(str1, "banana");
    //printf("바뀐 문자열: %s\n", str1);
    
   



    /**char str[80] = "apple juice";
    char* ps = "banana";

    puts(str);
    fputs(ps, stdout);
    puts("jam");*/




    /*int age;
    char name[20];

    printf("나이 입력:");
    scanf("%d", &age);
    getchar();
    printf("이름 입력:");
    gets(name);
    printf("나이:%d, 이름: %s\n", age, name);*/





    /*char str[80];
    printf("공백이 포함된 문자열 입력:");
    fgets(str, sizeof(str), stdin);
    printf("입력한 문자열:%s", str);
    */
    /*char str[80];

    printf("문자열 입력:");
    scanf("%s", str);
    printf("첫번째 단어 : %s\n", str);
    scanf("%s", str);
    printf("버퍼 남은 단어: %s\n", str);*/
    /*char* dessert = "apple";

    printf("오늘 후식은 %s 입니다. \n", dessert);
    dessert = "banana";
    printf("내일 후식은 %s 입니다. \n", dessert);*/

  
    
    
    
    
    /*char fruit[80] = "apple";
    
    printf("apple의 시작주소: %p \n","apple" );
    printf("apple의 두번째 시작주소: %p \n", "apple"+1);
    printf("apple의 첫번째 문자: %c \n", *"apple");
    printf("apple의 두번째 문자: %c \n", *("apple" +1));
    printf("apple의 세번째 문자: %c \n", "apple"[3]);
    printf("fruit의 시작주소:%p \n", fruit);
    printf("fruit의 시작주소:%s \n", fruit);
	*/
	system("pause");
	return EXIT_SUCCESS;
}
void my_gets(char* str, int size)
{
    int ch;
    int i = 0;

    ch = getchar();
    while ((ch != '\n') && (i < size - 1))
    {
        str[i] = ch;
        i++;
        ch = getchar();
        printf("%d  %c\n", ch,ch);
    }
    str[i] = '\0';
}