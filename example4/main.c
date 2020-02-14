/*
  filename - main.c
  version - 1.0
  description - 기본 메인 함수
  --------------------------------------------------------------------------------
  first created - 2020.02.14
  writer - SG S.
*/

#include <stdio.h>
#include <stdlib.h>

struct list {
    double num;
    struct list* next;
};


struct list* insertNode(struct node* current, double num);

int main(void) 
{
    struct list a , b , c ;
    printf("실수를 입력하세요:");
    scanf("%lf%lf%lf", &a.num, &b.num, &c.num);
    
    struct list* head = &a;
    
    struct list* temp;

    a.next = &b;
    b.next = &c;

    printf("리스트:");
    
    temp = head;
    
    while (temp != NULL)
    {
        printf("%.1lf   ", temp->num);
        temp = temp->next;
    }
    if (temp == NULL)
    {
        struct list *d = insertNode(temp,100);
    }
    
    
       


	system("pause");
	return EXIT_SUCCESS;
}
struct list* insertNode(struct list* current, double num)
{
    struct list* after = current-> next;

    struct list* newnode = (struct list*)malloc(sizeof(struct list));
    
    newnode->num = num;
    newnode->next = after;

    current->next = newnode;

    /*printf("실수를 입력하세요:");
    scanf("%lf", &newnode->num);*/

    return newnode;
    
}
