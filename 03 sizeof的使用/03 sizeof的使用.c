#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<stdlib.h>


//1��sizeof�ı��� 
void test01()
{
	//�ǲ���һ�������� ���ǣ�  �ǲ�����   + - * /
	printf("sizeof int = %d\n", sizeof(int));

	double d = 3.14;
	//���ͳ�Ƶ��Ǳ�����С���ſ���ʡ��
	printf("sizeof d = %d\n", sizeof d);
}

//2��sizeof����ֵ���� �������޷�������  unsigned int
void test02()
{
	unsigned int a = 10;
	//��int��unsigned int������ʱ������������תΪunsigned int
	//if (a - 20 > 0)
	//{
	//	printf("����0\n");
	//}
	//else
	//{
	//	printf("С��0\n");
	//}

	if ( sizeof(int) - 5  > 0)
	{
		printf("����0\n");
		printf("%u\n", sizeof(int)-5);
	}
	else
	{
		printf("С��0\n");
	}


}


//3��sizeofͳ�����鳤��
//ע������ �����������ƴ��뵽�������β�ʱ�򣬻��˻�Ϊһ��ָ�룬ָ�������е�һ��Ԫ�صĵ�ַ
void calculateArray(int * arr)
{
	printf("sizeof arr = %d\n", sizeof(arr)); // 4
}
void test03()
{
	int arr[] = { 1, 2, 3, 4, 5 };
	printf("sizeof arr = %d\n", sizeof(arr)); //20
	calculateArray(arr);
}

int main(){

	test03();

	system("pause");
	return EXIT_SUCCESS;
}