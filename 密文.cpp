#include "stdio.h"
int main()
{
	int miWen,mingWen,ge,shi,bai;
	printf("����������");
	scanf("%d",&miWen);
	bai=miWen/100;
	shi=miWen/10%10;
	ge=miWen%10;
	printf("���ܺ������:%d",mingWen);
	return 0;
}
