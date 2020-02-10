/*
  filename - main.c
  version - 1.0
  description - 기본 메인 함수, 파일 입출력
  --------------------------------------------------------------------------------
  first created - 2020.02.10
  writer - SG S.
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// 메인함수
int main(void) 
{
    FILE* fp;
    char str[20];

    fp = fopen("d.txt", "a+");
   
    if (fp == NULL)
    {
        printf("파일오픈 실패\n");
        return EXIT_FAILURE;
    }

    while (1)
    {
        printf("과일 이름:");
        scanf("%s", str);

        if (strcmp(str, "end") == 0)
        {
            break;
        }
        else if (strcmp(str, "list") == 0)
        {
            fseek(fp, 0, SEEK_SET);
            while (1)
            {
                fgets(str, sizeof(str), fp);
                if (feof(fp))
                {
                    break;
                }
                printf("%s", str);
            }
        }
        else
        {
            fprintf(fp, "%s\n", str);
        }
    }
    fclose(fp);

    /*FILE* fp;
    int ary[10] = { 13,10,13,13,10,26,13,10,13,10 };
    int i, res;

    fp = fopen("c.txt", "wb");
    for (int i = 0; i < 10; i++)
    {
        fputc(ary[i], fp);
    }
    fclose(fp);

    fp = fopen("c.txt", "rt");
    while (1)
    {
        res = fgetc(fp);
        if (res == EOF) break;
        printf("%5d", res);
    }*/


    /*int ch;

    while (1)
    {
        ch = fgetc(stdin);
        if (ch == EOF) break;

        fputc(ch, stdout);
    }*/

    /*FILE* fp;
    char str[] = "banana";
    int i = 0;
        int ch;

    fp = fopen("b.txt", "w");
    if (fp == NULL)
    {
        printf("파일오픈 실패\n");
        return EXIT_FAILURE;
    }

    while (str[i] != '\0')
    {
        fputc(str[i], fp);
        i++;
    }
    fputc('\n', fp);
    fclose(fp);*/

	system("pause");
	return EXIT_SUCCESS;
}