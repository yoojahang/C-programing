#include <stdio.h>
int main()
{
	int wjdtn;
	printf("세 자리 자연수를 입력해주세요: ");
	
	scanf("%d",&wjdtn);
	printf("%d,%d",wjdtn/100+wjdtn%100/10+wjdtn%100%10,(wjdtn/100)*(wjdtn%100/10)*(wjdtn%100%10));
	return 0;
}

