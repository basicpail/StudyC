/*
  filename - main.c
  version - 1.0
  description - �⺻ ���� �Լ�, �޸� ���� �Ҵ�
  --------------------------------------------------------------------------------
  first created - 2020.02.07
  writer - SG S.
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// �����Լ�
int main(void) 
{

    /*int* pi;
    int i, sum = 0;

    pi = (int*)malloc(sizeof(int));
    if (pi == NULL)
    {
        printf("#�޸𸮰� �����մϴ�.\n");
        exit(1);
    }

    printf("�ټ� ���� ���̸� �Է��ϼ���:");
    for (i = 0; i < 5; i++)
    {
        scanf("%d", &pi[i]);
        sum += pi[i];
    }


    printf("�ټ� ���� ��� ����: %.1lf\n", (sum/5.0));

    free(pi);*/
    
    int* pi;
    double* pd;

    pi = (int *)malloc(sizeof(int));
    
    if (pi == NULL)
    {
        printf("#�޸𸮰� �����մϴ�.\n");
        exit(1);
    }

    pd = (double*)malloc(sizeof(double));

    *pi = 10;
    *pd = 3.4;

    printf("���������� ��� : %d\n", *pi);
    printf("�Ǽ������� ���: %.1lf\n", * pd);

    free(pi);
    free(pd);


	system("pause");
	return EXIT_SUCCESS;
}