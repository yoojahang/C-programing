#include <stdio.h>
int main()
{
	int wjdtn;
	printf("�� �ڸ� �ڿ����� �Է����ּ���: ");
	
	scanf("%d",&wjdtn);
	printf("%d,%d",wjdtn/100+wjdtn%100/10+wjdtn%100%10,(wjdtn/100)*(wjdtn%100/10)*(wjdtn%100%10));
	return 0;
}

