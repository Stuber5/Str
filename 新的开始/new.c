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
	struct Book a = { "C�������",25 };
	struct Book* b = &a;
	printf("������:%s\n", a.name);
	printf("�۸���:%d\n", a.price);
	strcpy(a.name, "C���");
	a.price = 15;
	printf("������:%s\n", a.name);
	printf("�۸���:%d\n", a.price);
	return 0;
} 
