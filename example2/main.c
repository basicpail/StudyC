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

char invert (score);

int main(void) 
{
    int i;
    char grade;

    printf("������ �Է��ϼ���:");
    scanf("%d", &i);
    grade = invert(i);
	
    printf("���� %d : ����: %c\n", i, grade);

	system("pause");
	return EXIT_SUCCESS;
}

char invert(score)
{
    char a;
    if ((score >= 90) && (score <= 100))
    {
        a = 'A';
    }
    if ((score >= 70) && (score <= 89))
    {
        a = 'B';
    }
    if ((score >= 60) && (score <= 69))
    {
        a = 'C';
    }
    if ((score >= 50) && (score <= 59))
    {
        a = 'D';
    }
    if ((score >= 0) && (score <= 39))
    {
        a = 'F';
    }
    return a;

}