#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//集成，使用add.h和add.c

//引头文件
//相当于把头文件的内容包含进来
#include "add.h"
#include "sub.h"
int main()
{
	int a = 10; 
	int b = 20;
	//int c = Add(a, b);
	int c = Sub(a, b);
	printf("%d\n", c);
	return 0;
}

