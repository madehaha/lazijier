#include<stdio.h>
#include<windows.h>
int main()
{
	double  x, y, a;
	for (y = 1.5; y > -1.5; y -= 0.1)
	{
		for (x = -1.5; x < 1.5; x += 0.05)
		{
			a = x * x + y * y - 1;
			char ch = a * a * a - x * x * y * y*y <= 0.0 ? '*' : ' ';
			putchar(ch);
		}
		system("color 2");   //修改颜色
		printf("\n");
	}
	printf("没机会了，放弃吧！\n----好心人");
	return 0;
}
