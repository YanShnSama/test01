#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<stdlib.h>


//1、sizeof的本质 
void test01()
{
	//是不是一个函数？ 不是！  是操作符   + - * /
	printf("sizeof int = %d\n", sizeof(int));

	double d = 3.14;
	//如果统计的是变量，小括号可以省略
	printf("sizeof d = %d\n", sizeof d);
}

//2、sizeof返回值类型 返回是无符号整型  unsigned int
void test02()
{
	unsigned int a = 10;
	//当int和unsigned int做运算时，编译器都会转为unsigned int
	//if (a - 20 > 0)
	//{
	//	printf("大于0\n");
	//}
	//else
	//{
	//	printf("小于0\n");
	//}

	if ( sizeof(int) - 5  > 0)
	{
		printf("大于0\n");
		printf("%u\n", sizeof(int)-5);
	}
	else
	{
		printf("小于0\n");
	}


}


//3、sizeof统计数组长度
//注意事项 ，当函数名称传入到函数做形参时候，会退化为一个指针，指向数组中第一个元素的地址
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