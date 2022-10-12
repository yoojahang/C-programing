#include <stdio.h>
int main()
{
	int a; 
	printf("세 자리 수를 입력하세요. : ");
	scanf("%d",&a);
	printf("%d ",a/100+((a%100-a%10)/10)+(a%10));
}
