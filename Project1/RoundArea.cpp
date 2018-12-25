#include<stdio.h>
float areaOfACircle(float radius)
{
	const float pi = 3.14159;
	float result;
	result = radius * radius * pi;
	return result;
}
int main()
{
	float r = 0;
	float area;
	printf("请输入圆的半径:\n");
	scanf("%f", &r);
	area = areaOfACircle(r);
	printf("这个圆的面积是");
	printf("%f\n",area);
	return 0;
}

