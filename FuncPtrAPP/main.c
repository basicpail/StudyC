/*
  filename - main.c
  version - 1.0
  description - �⺻ ���� �Լ�, �Լ������� �н�
  --------------------------------------------------------------------------------
  first created - 2020.02.06
  writer - SG S.
*/

#include <stdio.h>

int main(void)
{
    int a = 10;
    double b = 3.5;
    void* vp;

    vp = &a;
    printf("a: %d\n", *(int*)vp);

    vp = &b;
    printf("b: %.lf\n", *(double*)vp);

    system("pause");
    return 0;
}
// �����Լ�
/*void func(int(*fp)(int, int));
int sum(int a, int b);
int mul(int a, int b);
int max(int a, int b);


int main(void) 
{
    int sel;

    printf("01 �� ������ ��:\n");
    printf("02 �� ������ ��:\n");
    printf("03 �� ���� �߿��� ū �� ���:\n");
    printf("���ϴ� ������ �����ϼ���:\n");
    scanf("%d", &sel);

    switch (sel)
    {
    case 1:func(sum); break;
    case 2:func(mul); break;
    case 3:func(max); break;
    }
	system("pause");
	return 0;
}



void func(int(*fp)(int, int))
{
    int a, b;
    int res;

    printf("�� ������ ���� �Է��ϼ���:");
    scanf("%d%d", &a, &b);
    res = fp(a, b);
    printf("�������:%d\n", res);
}
int sum(int a, int b)
{
    return(a + b);
}
int mul(int a, int b)
{
    return(a * b);
}
int max(int a, int b)
{
    if (a > b) return a;
    else return b;
}*/
