#include<stdio.h>
int main()
{
	char str[9];
	int i;
	
	printf("10���� �� ���ڿ� �Է� : ");
	scanf("%s", str);
	
	
	for(i=strlen(str); i>=0; i--)
	{
		putchar(str[i]);
	}
	
	
	return 0;
}
