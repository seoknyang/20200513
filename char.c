#include<stdio.h>
int main()
{
	char a, b;
	
	printf("�빮�� �Է� : ");
	scanf("%c", &a);
	getchar();
	//fflush(stdin);
	printf("�ҹ��� �Է� : ");
	scanf("%c", &b);
	
	//A = 65, a = 97, '0' = 48
	printf("����� �Է��� %c�� �ҹ��� %c�Դϴ�.\n",a,a+32);
	printf("����� �Է��� %c�� �빮�ڴ� %c�Դϴ�.\n",b,b-32); 
	return 0;
}
