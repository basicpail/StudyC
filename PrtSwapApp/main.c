/*
  filename - main.c
  version - 1.0
  description - 기본 메인 함수, 포인터 스왑 학습
  --------------------------------------------------------------------------------
  first created - 2020.02.06
  writer - SG S.
*/

#include <stdio.h>
#include <stdlib.h>
//void swap_ptr(char** ppa, char** ppb);
// 메인함수
//void print_str(char** src, int cnt);
void print_ary(int(*)[4]);

int main(void) 
{
    int ary[3][4] = { {1,2,3,4},{5,6,7,8},{9,10,11,12} };

    print_ary(ary);
    

    /*
    char* ptr_ary[4] = { "eagle","tiger","lion","squirrel" };
    int cnt = sizeof(ptr_ary) / sizeof(ptr_ary[0]);
    print_str(ptr_ary, cnt);*/



   /*char* pa = "success";
    char* pb = "failure";
	
    printf("pa = %s, pb = %s\n", pa, pb);
    swap_ptr(&pa, &pb);
    printf("pa = %s, pb = %s\n", pa, pb);*/
   
    
    system("pause");
	return EXIT_SUCCESS;
}
void print_ary(int (*pa)[4])
{
    int i, j;
    
    for(i = 0; i < 3; i++)
    {
        for ( j = 0; j < 4; j++)
        {
            printf("%5d", pa[i][j]);
        }
        printf("\n");
    }

}


//void print_str(char** src, int cnt)
//{
//    for (int i = 0; i < cnt; i++)
//    {
//        printf("%s\n", src[i]);
//    }
//}



//void swap_ptr(char** ppa, char** ppb)
//{
//    char* temp;
//    temp = *ppa;
//    *ppa = *ppb;
//    *ppb = temp;
//}