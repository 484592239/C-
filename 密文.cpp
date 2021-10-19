#include "stdio.h"
int main()
{
	int miWen,mingWen,ge,shi,bai;
	printf("请输入密文");
	scanf("%d",&miWen);
	bai=miWen/100;
	shi=miWen/10%10;
	ge=miWen%10;
	printf("解密后的明文:%d",mingWen);
	return 0;
}
