#ifdef _MSC_VER
#define _CRT_SECURE_NO_WARNINGS
#endif // _MSC_VER

#include <stdio.h>
#include <stdlib.h>

int main()
{
	char grade;
	char name[20];

	printf("학점을 입력하세요:" );
	scanf("%c",&grade);
	printf("이름을 입력하세요:");
	scanf("%s", &name);

	printf("%s의 학점:%c \n", name, grade);
	/*char fruit [20] = "strawberry";

	printf("딸기: %s\n", fruit);
	printf("딸기 쨈: %s %s \n", fruit, "jam");
	strcpy(fruit, "water melon");
	printf("이번 과일: %s\n", fruit);*/
	
	system("pause");
	return 0;

}