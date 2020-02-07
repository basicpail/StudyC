/*
  filename - main.c
  version - 1.0
  description - 기본 메인 함수, 사용자 정의 자료형  Structure 학습
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
// 메인함수
int main(void) 
{

	struct student 
		s1 = { 315, "홍길동", 2.4 },   
		s2 = { 316, "이순신", 3.7 },
		s3 = { 317, "세종대왕", 4.4 };

	struct student max;					   

	max = s1;							   
	if (s3.grade > max.grade) max = s3;   
	printf("학번 : %d\n", max.id);         
	printf("이름 : %s\n", max.name);       
	printf("학점 : %.1lf\n", max.grade);   


	/*struct student yuni;

	yuni.pf.age = 40;
	yuni.pf.height = 180.0;
	yuni.id = 100;
	yuni.grade = 4.5;

	printf("나이 : %u\n", yuni.pf.age);
	printf("키 : %.1lf\n", yuni.pf.height);
	printf("아이디 : %d\n", yuni.id);
	printf("학점 : %.1lf\n", yuni.grade);*/

	/*struct student yuni;

	yuni.pf.age = 40;
	yuni.pf.height = 180.0;
	yuni.id = 100;
	yuni.grade = 4.5;

	printf("나이 : %u\n", yuni.pf.age);
	printf("키 : %.1lf\n", yuni.pf.height);
	printf("아이디 : %d\n", yuni.id);
	printf("학점 : %.1lf\n", yuni.grade);*/


	/*struct profile yuni;                 

	strcpy(yuni.name, "송상근");         
	yuni.age = 17;                       
	yuni.height = 186.5;                 

	yuni.intro = (char*)malloc(80);      
	printf("자기소개 : ");
	gets(yuni.intro);                    

	printf("이름 : %s\n", yuni.name);    
	printf("나이 : %d\n", yuni.age);
	printf("키 : %.1lf\n", yuni.height);
	printf("자기소개 : %s\n", yuni.intro);
	free(yuni.intro);                    */


	system("pause");
	return EXIT_SUCCESS;
}