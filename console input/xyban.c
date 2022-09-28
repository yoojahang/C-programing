#include <stdio.h>
int main()
{
	int x,y;
	float ban;
	printf("원의 중심과 반지름을 순서대로 입력하세요.");
	scanf("%d %d %f",&x,&y,&ban);
	printf("원의 중심은 %d,%d이고 원의 반지름은 %f입니다.",x,y,ban);
	return 0;
}
