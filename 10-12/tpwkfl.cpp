#include <stdio.h>
int main()
{
	int a; 
	printf("�� �ڸ� ���� �Է��ϼ���. : ");
	scanf("%d",&a);
	printf("%d ",a/100+((a%100-a%10)/10)+(a%10));
}
