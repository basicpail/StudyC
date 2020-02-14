/*
  filename - main.c
  version - 1.0
  description - c 테스트
  --------------------------------------------------------------------------------
  first created - 2020.02.14
  writer - SG SONG.
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct list {
    int num;
    char name[50];
    int pnum;
    char email[50];

};
struct list* input_business_card(struct list* a);
void show_all_cards(struct list* a);
void search_business_card(struct list* a, int num);
void edit_business_card(struct list* a, int num);


int q;



int main(void)
{
    int select;
    struct list s1[50];

    while (1) {

        printf("1번 입력, 2번 수정, 3번 삭제, 4번 전체출력, 5번 검색, 6번 종료\n");
        scanf("%d", &select);

        if (select == 1)
        {

            input_business_card(s1);
        }
        if (select == 2)
        {
            int b;
            printf("몇 번째 명함을 수정 하시겠습니까?\n");
            scanf("%d", &b);
            edit_business_card(s1, b);
        }
        if (select == 3)
        {
            int c;
            printf("몇 번째 명함을 삭제 하시겠습니까?\n");
            scanf("%d", &c);



            printf("%d 번째 명함이 삭제 되었습니다.\n", c);
        }
        if (select == 4)
        {
            show_all_cards(s1);

        }
        if (select == 5)
        {
            int d;
            printf("검색 할 명함 번호:\n");
            scanf("%d", &d);
            search_business_card(s1, d);
        }
        if (select == 6)
        {
            printf("종료합니다.");
            break;
        }
    }


    system("pause");
    return EXIT_SUCCESS;
}

struct list* input_business_card(struct list* a)
{

    static int i;
    i++;

    printf("명함정보(명함번호,한글이름,폰번호,이메일)를 입력하세요:");
    scanf("%d%s%d%s", &a[i].num, &a[i].name, &a[i].pnum, &a[i].email);


    printf("%d번째 명함이 생성되었습니다.\n", i);
    q = i;
}

void edit_business_card(struct list* a, int num)
{
    int b;
    b = num;
    printf("새로운 명함정보(명함번호,한글이름,폰번호,이메일)를 입력하세요:");
    scanf("%d%s%d%s", &a[b].num, &a[b].name, &a[b].pnum, &a[b].email);
    printf("%d번째 명함이 수정 되었습니다.\n", b);
}


void show_all_cards(struct list* a)
{
    int x;
    for (x = 1; x <= q; x++)
    {
        printf("%d %s %d %s\n", a[x].num, &a[x].name, a[x].pnum, &a[x].email);
        if (a[x].num == 0) break;
    }
}

void search_business_card(struct list* a, int num)
{
    int x;
    x = num;
    printf("%d %s %d %s\n", a[x].num, &a[x].name, a[x].pnum, &a[x].email);
}