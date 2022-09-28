#include <stdio.h>
int main()
{
	int grade,ban,num;
	printf("학년 반 번호 순서대로 입력하세요 : ");
	scanf("%d %d %d",&grade,&ban,&num);
	printf("%d학년 %d반 %d번 입니다. \n",grade,ban,num); 
	
	return 0;
}
