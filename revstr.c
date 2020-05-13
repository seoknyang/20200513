#include<stdio.h>
int main()
{
	char str[9];
	int i;
	
	printf("10글자 내 문자열 입력 : ");
	scanf("%s", str);
	
	
	for(i=strlen(str); i>=0; i--)
	{
		putchar(str[i]);
	}
	
	
	return 0;
}
