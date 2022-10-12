#include <stdio.h>
int main()
{
	int a; 
	printf("두 자리 수를 입력하세요. : ");
	scanf("%d",&a);
	printf("%d",a/10+a%10);
}
