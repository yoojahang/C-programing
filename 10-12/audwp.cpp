#include <stdio.h>
int main()
{
	int a;
	printf("숫자입력 : ");
	scanf("%d",&a);
	printf("a를 7로 나눈 몫은 5이다. - %d",a/7==5);
	printf("\na를 3으로 나눈 나머지는 0이다. - %d",a/3==0);
	printf("\na를 5의 배수가 아니다. - %d",a/5!=0);
	printf("\na를 3의 배수이고 짝수이다 - %d",a/3==0&&a/2==0);
	printf("\na를 4또는 7로 나누면 나머지가 0이다 - %d",a/7==0&&a/4==0);
}
