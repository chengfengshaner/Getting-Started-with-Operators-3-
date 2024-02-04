#include <stdio.h>

int main()
{
	int a = 10;
	int b = ++a;//前置++ - 先++，后使用

	printf("%d\n", b);// 11
	printf("%d\n\n", a);// 11

	int c = 10;
	int d = c++;//后置++ - 先使用，后++

	printf("%d\n", d);// 10
	printf("%d\n\n", c);// 11

	//int e = 1;
	//int f = (++a) + (++a) + (++a);//不建议研究 - 花时间且没有实际意义，甚至可能是错误代码
	//printf("%d\n", b);


	return 0;
}