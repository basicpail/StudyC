/*
  filename - main.c
  version - 1.0
  description - �⺻ ���� �Լ�, ����� ���� �ڷ���  Structure �н�
  --------------------------------------------------------------------------------
  first created - 2020.02.07
  writer - SG S.
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
//struct profile         
//{
////    char name[20];     
//    int age;           
//    double height;     
////    char* intro;       
//};
//struct student
//{
//	struct profile pf;
//	int id;
//	double grade;
//};


struct student       
{
	int id;          
	char name[20];   
	double grade;    
};
// �����Լ�
int main(void) 
{

	struct student 
		s1 = { 315, "ȫ�浿", 2.4 },   
		s2 = { 316, "�̼���", 3.7 },
		s3 = { 317, "�������", 4.4 };

	struct student max;					   

	max = s1;							   
	if (s3.grade > max.grade) max = s3;   
	printf("�й� : %d\n", max.id);         
	printf("�̸� : %s\n", max.name);       
	printf("���� : %.1lf\n", max.grade);   


	/*struct student yuni;

	yuni.pf.age = 40;
	yuni.pf.height = 180.0;
	yuni.id = 100;
	yuni.grade = 4.5;

	printf("���� : %u\n", yuni.pf.age);
	printf("Ű : %.1lf\n", yuni.pf.height);
	printf("���̵� : %d\n", yuni.id);
	printf("���� : %.1lf\n", yuni.grade);*/

	/*struct student yuni;

	yuni.pf.age = 40;
	yuni.pf.height = 180.0;
	yuni.id = 100;
	yuni.grade = 4.5;

	printf("���� : %u\n", yuni.pf.age);
	printf("Ű : %.1lf\n", yuni.pf.height);
	printf("���̵� : %d\n", yuni.id);
	printf("���� : %.1lf\n", yuni.grade);*/


	/*struct profile yuni;                 

	strcpy(yuni.name, "�ۻ��");         
	yuni.age = 17;                       
	yuni.height = 186.5;                 

	yuni.intro = (char*)malloc(80);      
	printf("�ڱ�Ұ� : ");
	gets(yuni.intro);                    

	printf("�̸� : %s\n", yuni.name);    
	printf("���� : %d\n", yuni.age);
	printf("Ű : %.1lf\n", yuni.height);
	printf("�ڱ�Ұ� : %s\n", yuni.intro);
	free(yuni.intro);                    */


	system("pause");
	return EXIT_SUCCESS;
}