#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//���ɣ�ʹ��add.h��add.c

//��ͷ�ļ�
//�൱�ڰ�ͷ�ļ������ݰ�������
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

