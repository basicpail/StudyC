/*
  filename - main.c
  version - 1.0
  description - �⺻ ���� �Լ�, ����ü Ȱ��
  --------------------------------------------------------------------------------
  first created - 2020.02.07
  writer - SG S.
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
//struct score
//{
//    int kor;
//    int eng;
//    int math;
//};


struct list
{
    int num;
    struct list* next;
};

int main(void) 
{
    struct list a = { 10,1 }, b = { 20,2 }, c = { 30,3 };
    struct list* head = &a, * current;

    a.next = &b;
    b.next = &c;

    printf("head -> num: %d\n", head->num);
    printf("head ->next-> num: %d\n", head->next->num);
   /* struct score yuni = { 85, 90, 100 };
    struct score* ps = &yuni;
    
    printf("���� %d\n", (*ps).kor);
    printf("���� %d\n", ps ->eng);
    printf("���� %d\n", ps ->math);
	*/
    
    system("pause");
	return EXIT_SUCCESS;
}