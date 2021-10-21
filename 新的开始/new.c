#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<string.h>

struct Book
{
	char name[20];
	short price;
};

int main()
{
	struct Book a = { "C程序设计",25 };
	struct Book* b = &a;
	printf("书名是:%s\n", a.name);
	printf("价格是:%d\n", a.price);
	strcpy(a.name, "C设计");
	a.price = 15;
	printf("书名是:%s\n", a.name);
	printf("价格是:%d\n", a.price);
	return 0;
} 
