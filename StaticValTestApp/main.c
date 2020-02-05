/*
  filename - main.c
  version - 1.0
  description - 기본 메인 함수 , 정적변수 학습
  --------------------------------------------------------------------------------
  first created - 2020.02.05
  writer - SG S.
*/

#include <stdio.h>
#include <stdlib.h>


int main(void)
{
    char animal[5][20];
    int i;
    int count;

    count = sizeof(animal) / sizeof(animal[0]);

    for (i = 0; i < count; i++)
    {
        scanf("%s", animal[i]);
    }

    for (i = 0; i < count; i++)
    {
        printf("%s\t", animal[i]);
    }
    //int score[3][4];
    //int total;
    //double avg;
    //int i, j;

    //for (i = 0; i < 3; i++)
    //{
    //    printf("4과목의 점수 입력:");
    //    for (j = 0; j < 4; j++)
    //    {
    //        scanf("%d", &score[i][j]);
    //    }
    //}

    //for (i = 0; i < 3; i++)
    //{
    //    total = 0;
    //    for (j = 0; j < 4; j++)
    //    {
    //        total += score[i][j];
    //    }
    //    avg = total / 4.0;
    //    printf("총점 : %d, 평균:%.2lf\n", total, avg);

    //    
    //}
    system("pause");
    return EXIT_SUCCESS;
}



//void auto_func(void);
//void static_func(void);
//
//// 메인함수
//int main(void) 
//{
//    printf("일반 지역변수 함수...\n");
//    for (int i=0 ; i < 3 ; i++)
//    {
//        auto_func();
//    }
//    printf("정적 지역변수 함수...\n");
//    for (int i = 0; i < 3; i++)
//    {
//        static_func();
//    }
//	system("pause");
//	return EXIT_SUCCESS;
//}
//
//void auto_func(void)
//{
//    auto int a = 0;
//
//    a++;
//    printf("%d\n", a);
//}
//void static_func(void)
//{
//    static int a;
//
//    a++;
//    printf("%d\n", a);
//}