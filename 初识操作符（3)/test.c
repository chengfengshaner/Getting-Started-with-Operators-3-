#include <stdio.h>

int main()
{
	int a = 10;
	int b = ++a;//ǰ��++ - ��++����ʹ��

	printf("%d\n", b);// 11
	printf("%d\n\n", a);// 11

	int c = 10;
	int d = c++;//����++ - ��ʹ�ã���++

	printf("%d\n", d);// 10
	printf("%d\n\n", c);// 11

	//int e = 1;
	//int f = (++a) + (++a) + (++a);//�������о� - ��ʱ����û��ʵ�����壬���������Ǵ������
	//printf("%d\n", b);


	return 0;
}