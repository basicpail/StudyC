/*
  filename - main.c
  version - 1.0
  description - �⺻ ���� �Լ�, ���Ϻ��� �н�
  --------------------------------------------------------------------------------
  first created - 2020.02.10
  writer - SG S.
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void) 
{
	FILE* ifp, * ofp;				
	char name[20];					
	int kor, eng, math;				
	int total;						
	double avg;						
	int res;						

	ifp = fopen("a.txt", "r");      
	if (ifp == NULL)               
	{
		printf("�Է� ������ ���� ���߽��ϴ�.\n");
		return 1;
	}

	ofp = fopen("b.txt", "w");      
	if (ofp == NULL)               
	{
		printf("��� ������ ���� ���߽��ϴ�.\n");
		return 1;
	}

	while (1)
	{
		res = fscanf(ifp, "%s%d%d%d", name, &kor, &eng, &math);  
		if (res == EOF)             
		{
			break;
		}
		total = kor + eng + math;   
		avg = total / 3.0;          
		fprintf(ofp, "%s%5d%7.1lf\n", name, total, avg);  
	}

	fclose(ifp);
	fclose(ofp);

 /*   FILE* ifp, * ofp;
    char str[80];
    char* res;

    ifp = fopen("aa.txt", "r");
    if (ifp == NULL)
    {
        printf("���Ͽ��� ����\n");
        return EXIT_FAILURE;
    }

    ofp = fopen("bb.txt", "w");
    if (ofp == NULL)
    {
        printf("���ϻ��� ����\n");
        return EXIT_FAILURE;
    }
    while (1)
    {
        res = fgets(str, sizeof(str), ifp);
        if (res == NULL)
            str[strlen(str) - 1] = '\0';
        fputs(str, ofp);
        fputs("\n", ofp);
    }
    fclose(ifp);
    fclose(ofp);*/


	system("pause");
	return EXIT_SUCCESS;
}