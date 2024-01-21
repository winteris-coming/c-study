
#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>




//函数
//子程序，程序的一部分代码，拥有一定的独立性



//strcpy（destination,source）函数，作用拷贝
//int main()
//{
//	char arr1[] = "liu";
//	char arr2[] = "###########";
//	strcpy(arr2, arr1);
//	printf("%s\n", arr2);//字符串的结束标志是\0,当使用strcpy进行拷贝时，会把\0同时拷贝过去，导致只输出到\0进行截止
//	return 0;
//}


//
////memset(void* value num)函数，memory set内存设置，更改内存
//int main()
//{
//	char arr1[] = "hello,world!";
//	memset(arr1, '*', 5);
//	printf("%s\n", arr1);
//	return 0;
//
//}




//
//
////交换变量
////当实参传递给形参时，形参是实参的临时拷贝，对形参的更改并不会影响到实参
//void swap(int x,int y)//为什么无法交换变量，因为x,y与a,b是不同的地址，该定义的函数只是将a,b的值
//					//赋给了x,y的变量，交换的是x,y的值
//{
//	int tmp=0;
//	tmp = x;
//	x = y;
//	y = tmp;
//	
//}
//void swap2(int* px, int* py)//该定义的函数直接将a,b地址上的变量进行了互换
//{
//	int tmp = 0;
//	tmp = *px;
//	*px = *py;
//	*py = tmp;
//}
//int main()
//{
//	int a = 10;
//	int b = 20;
//	printf("%d\n", a);
//	printf("%d\n", b);
//
//	swap(a,b);
//	printf("%d\n", a);
//	printf("%d\n", b);
//	swap2(&a, &b);
//	printf("%d\n", a);
//	printf("%d\n", b);
//	return 0;
//	
//}




//
////链式和嵌套
//int main()
//{
//	printf("%d", printf("%d", printf("%d", 43)));//printf函数返回的是字符个数
//	return 0;
//}



////函数声明放在.h里面，函数实现过程放在.c里面,通过include引用函数
//#include "add.h"
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int z = 0;
//	z=Add(a, b);
//	printf("%d\n", z);
//	return 0;
//}



//
////递归
////程序调用自身的一种编程技巧
//int main()
//{
//	printf("哈哈");
//	main();//递归，不断执行main()里面的程序，为什么会报栈溢出错误？存储空间划分为栈（存储局部变量的）
//	//，堆（存储动态变量），静态区（存储全局变量），每次执行main(),会在栈里面划分一块空间，
//	//执行太多main(),而栈的空间被划分干净之后就会报栈溢出错误
//	
//}



//
////1234->4321
//int print(unsigned int n)//1234   123   12   1   12   123   1234
//{
//	if(n>9)
//	{
//		print(n / 10);//123  12   1
//	}
//	printf("%d", n % 10);//1  2   3   4
//}
//int main()
//{
//	int num = 1234;
//	/*printf("请输入一个数");
//	scanf("%d\n", &num);*/
//	print(num);
//	return 0;
//}


//
////写一个函数替换掉strlen()函数，计算字符串的长度
//int my_strlen(char* arr)
//{
//	int count = 0;
//	while(*arr != '\0')//单个字符用单引号，字符串用双引号
//	{
//		count++;
//		arr++;
//	}
//	return count;
//}
//int main()
//{
//	char arr[] = "liurongjin";
//	int num = 0;
//	/*num = strlen(arr);
//	printf("%d", num);*/
//	num = my_strlen(arr);//arr是数组，数组传参传过去的不是整个数组，而是第一个字符的地址
//	printf("%d", num);
//	
//}




////递归方法
//int my_strlen(char* arr)
//{
//	if (*arr != '\0')
//	{
//		return 1 + my_strlen(1 + arr);
//	}
//	else
//	{
//		return 0;
//	}
//
//}
//int main()
//{
//	char arr[] = "liurongjin";
//	int num = 0;
//	num = my_strlen(arr);
//	printf("%d", num);
//}





//求n的阶乘
//int Fac1(int num)
//{
//	int i = 0;
//	int ret = 1;
//	for (i = 1; i <= num; i++)
//	{
//		ret *= i;
//	}
//	return ret;
//}
//int Fac2(int num)
//{
//	
//	if (num <= 1)
//		return 1;
//	else
//		return num * Fac2(num- 1);
//}
//int main()
//{
//	int num = 0;
//	int ret = 0;
//	scanf("%d", &num);
//	ret = Fac2(num);
//	printf("%d", ret);
//	return 0;
//}





//斐波那契算法优化
//int Feibo(int n)
//{
//	if (n <= 2)
//		return 1;
//	else
//		return Feibo(n - 1) + Feibo(n - 2);
//}
//int Feibo1(int n)
//{
//	int a=1;
//	int b=1;
//	int c=0;
//	while (n > 2)
//	{
//		c = a + b;
//		a = b;
//		b = c;
//		n--;
//
//	}
//	return c;
//}
//int main()
//{
//	int ret = 0;
//	int num = 0;
//	scanf("%d", &num);
//	ret=Feibo1(num);
//	printf("%d", ret);
//	return 0;
//}