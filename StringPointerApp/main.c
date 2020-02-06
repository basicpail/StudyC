/*
  filename - main.c
  version - 1.0
  description - 기본 메인 함수 , 포인터 배열 학습
  --------------------------------------------------------------------------------
  first created - 2020.02.06
  writer - SG S.
*/

#include <stdio.h>
#include <stdlib.h>
#include<string.h>
// 메인함수
int main(void) 
{
    /*int  a = 10;
    int* pi;
    int** ppi;

    pi = &a;
    ppi = &pi;

    printf("a%10d%10p\n", a, &a);
    printf("pi%10p%10p%10d\n", pi, &pi, *pi);
    printf("ppi%10p%10p%10p%10d\n",ppi, &ppi,*ppi, **ppi);*/
    
    
    
    
    
    /*int num[4][5];
    int temp=0;
    int a=0;
    int j = 1;
    int c=6;

    for (int i = 0; i < 5; i++)
    {
        
        for ( j ; j < c; j++)
        {
            a = j;
            printf("%2d", a);
            
            if (j == 5)
            {
                printf("\ ");
                for (c ; c >= a; c--)
                {
                    temp = temp + c;
                }
                printf("%2d\n", temp);
                temp = 0;
                c = 0;
                
            }
         
        }
        c = 2 * j;
        printf("\n");
    }*/
    
    
    
    
    /* int ary1[4] = { 1,2,3,4 };
    int ary2[4] = { 5,6,7,8 };
    int ary3[4] = { 9,10,11,12 };
    int* pary[3] = { ary1,ary2,ary3 };

    printf("%d\n", &pary);
    printf("%d\n", &ary1);
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            printf("%5d", pary[i][j]);
        }
        printf("\n");
    }*/
 
    
    
    
    
    
    
    
    /*   char* animal[4];

    animal[0] = "elephant";
    animal[1] = "tiger";
    animal[2] = "cat";
    animal[3] = "dog";
    
    printf("%d\n", &"elephant");
    for (int i = 0;  i< 4; i++)
    {
        printf("%s\n", animal[i]);
        printf("%d\n", &animal[i]);
    }
    printf("%s\n", animal);*/

	system("pause");
	return EXIT_SUCCESS;
}