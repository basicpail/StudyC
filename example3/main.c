/*
  filename - main.c
  version - 1.0
  description - �⺻ ���� �Լ�
  --------------------------------------------------------------------------------
  first created - 2020.02.13
  writer - SG S.
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct student
{
    char name[20];
    int kor;
    int eng;
    int math;
}; 

int summingk(struct student* lp);
int summinge(struct student* lp);
int summingm(struct student* lp);

int main(void) 
{
    int i,j;
    //struct student *sumk, * sume, * summ;
    int sumk,sume,summ=0;
    int avgk, avge, avgm=0;
    int a;
    char x;
    
    

    struct student s1[3]  ;
    /*{ {"ȫ�浿1",10,20,30},
        {"ȫ�浿2",20,30,40},
        {"ȫ�浿3",30,40,50} };*/
    for (j = 0; j < 3; j++)
    {
        printf("�̸��� �Է��ϼ���:");
        scanf("%s", &s1[j].name);
        printf("����, ����, ���� ������ �Է��ϼ���:");
        scanf("%d%d%d", &s1[j].kor, &s1[j].eng, &s1[j].math);
    }
    printf("\n");
    printf("   �̸�      ��������   ��������    ��������\n");



    for (int i = 0; i < 3; i++)
    {
        printf("%10s%10d%10d%10d\n",
            s1[i].name, s1[i].kor, s1[i].eng, s1[i].math);
    }
    printf("\n");
        /*if (i == 0)
        {
            sumk += s1[i].kor;
            sume += s1[i].eng;
            summ += s1[i].math;
            
        }
        if (i == 1)
        {
            sumk += s1[i].kor;
            sume += s1[i].eng;
            summ += s1[i].math;
        }
        if (i == 2)
        {
            sumk += s1[i].kor;
            sume += s1[i].eng;
            summ += s1[i].math;
        }
    
    
    }

    printf("���� ���� �հ�:%d\n", sumk);
    printf("���� ���� �հ�:%d\n", sume);
    printf("���� ���� �հ�:%d\n", summ);*/
    sumk = summingk(s1); sume = summinge(s1); summ = summingm(s1);

    printf("���� ���� �հ�:%d\n", sumk);
    printf("���� ���� �հ�:%d\n", sume);
    printf("���� ���� �հ�:%d\n\n", summ);
    
    avgk = sumk / 3; avge = sume / 3; avgm = summ / 3;
	
    printf("���� ���� ���:%d\n", avgk);
    printf("���� ���� ���:%d\n", avge);
    printf("���� ���� ���:%d\n", avgm);

    system("pause");
	return EXIT_SUCCESS;
}

//int suming(struct student *lp)
//{  
//    struct student s1;
//    int sum;
//    int i, j;
//    
//    sum = s1.kor;
//
//    for (i = 0; i < 3; i++) {
//
//        for (j = 1; j <= 3; j++) {
//            sum += s1[i][j];
//        }
//    }
   
int summingk(struct student* lp)
{
    int i;
    int sumk = 0 ;
    for (i = 0; i < 3; i++)
    {
            sumk += lp[i].kor;
            
    }
    return sumk;
}
int summinge(struct student* lp)
{
    int i;
    int sume = 0;
    for (i = 0; i < 3; i++)
    {
        sume += lp[i].eng;
        
    }
    return sume;
}
int summingm(struct student* lp)
{
    int i;
    int summ = 0;
    for (i = 0; i < 3; i++)
    {
        summ += lp[i].math;
    }
    return summ;
}
