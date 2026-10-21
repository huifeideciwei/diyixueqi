#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<math.h>
int main()
{
	double a, b, c, p, S;
	scanf("%lf %lf %lf", &a, &b, &c);
	p = (a + b + c) / 2;
	S = sqrt(p * (p - a) * (p - b) * (p - c));
	printf("a=%lf\tb=%lf\tc=%lf\tp=%lf\n", a, b, c, p);
	printf("S=%f\n", S);
	return 0;
}