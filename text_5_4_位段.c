#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

struct s
{
	int a : 4;//4������λ
	int b : 2;//2������λ
	int c : 8;//8������λ
	int d : 16;//16������λ
};

int main()
{
	struct s s1;
	s1.a = 8;
	s1.b = 10;
	s1.c = 20;
	s1.d = 30;
	printf("%d\n", sizeof(s1));//4
	printf("%d %d %d %d", s1.a, s1.b, s1.c, s1.d);//-8 -2  20 30
	return 0;
}