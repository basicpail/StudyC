/*
  filename - main.c
  version - 1.0
  description - c �׽�Ʈ
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

        printf("1�� �Է�, 2�� ����, 3�� ����, 4�� ��ü���, 5�� �˻�, 6�� ����\n");
        scanf("%d", &select);

        if (select == 1)
        {

            input_business_card(s1);
        }
        if (select == 2)
        {
            int b;
            printf("�� ��° ������ ���� �Ͻðڽ��ϱ�?\n");
            scanf("%d", &b);
            edit_business_card(s1, b);
        }
        if (select == 3)
        {
            int c;
            printf("�� ��° ������ ���� �Ͻðڽ��ϱ�?\n");
            scanf("%d", &c);



            printf("%d ��° ������ ���� �Ǿ����ϴ�.\n", c);
        }
        if (select == 4)
        {
            show_all_cards(s1);

        }
        if (select == 5)
        {
            int d;
            printf("�˻� �� ���� ��ȣ:\n");
            scanf("%d", &d);
            search_business_card(s1, d);
        }
        if (select == 6)
        {
            printf("�����մϴ�.");
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

    printf("��������(���Թ�ȣ,�ѱ��̸�,����ȣ,�̸���)�� �Է��ϼ���:");
    scanf("%d%s%d%s", &a[i].num, &a[i].name, &a[i].pnum, &a[i].email);


    printf("%d��° ������ �����Ǿ����ϴ�.\n", i);
    q = i;
}

void edit_business_card(struct list* a, int num)
{
    int b;
    b = num;
    printf("���ο� ��������(���Թ�ȣ,�ѱ��̸�,����ȣ,�̸���)�� �Է��ϼ���:");
    scanf("%d%s%d%s", &a[b].num, &a[b].name, &a[b].pnum, &a[b].email);
    printf("%d��° ������ ���� �Ǿ����ϴ�.\n", b);
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