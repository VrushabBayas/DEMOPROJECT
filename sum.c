#include <stdio.h>
int addNum(int, int);
int main()
{
	int a = 10, b = 20;
	int res = addNum(a, b);
	int sub = subtractNum(a, b);
	printf("Addition is:%d", res);
	printf("division is:%d", res);

	return 0;
}

int addNum(int no1, int no2)
{
	return no1 + no2;
}
int subtractNum(int no1, int no2)
{
	return no1 - no2;
}
