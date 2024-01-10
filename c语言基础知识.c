
#define _CRT_SECURE_NO_WARNINGS 1

//包含头文件
#include <stdio.h>
// 打印输出
//int main()
//{
//	//使用printf(print打印founction功能 )函数输出
//	/*printf("hello,world!\n");
//	return 0;*/
//}




//数据类型
//int main()
//{	
//
//	//char ch = 'a';
//	//printf("%c\n", ch);//%c打印字符格式的数据
//	//return 0;
//
//	//int i = 20;
//	//printf("%d\n", i);//%d打印整型十进制数据
//	//return 0;
//
//	/*float tall = 179.0;
//	printf("%f\n", tall);//%f打印浮点型数据
//	return 0;*/
//
//	/*double height = 59.0;
//	printf("%lf\n", height);//打印双精度浮点型数据
//	return 0;*/
//}




//每种数据类型所占用的空间
//int main()
//{
//	printf("%d\n", sizeof(short));//2个字节，16比特，存储空间为0~65535
//	printf("%d\n", sizeof(float));//4个字节，32比特，存储空间为0~4,294,967,295
//	printf("%d\n", sizeof(int));//4个字节，32个比特，存储空间为0~4,294,967,295
//	printf("%d\n", sizeof(char));//1个字节，8个比特，存储空间为0~255
//	printf("%d\n", sizeof(long long));//8个字节，64个比特，存储空间为0~18,446,744,073,709,551,615
//	printf("%d\n", sizeof(long));//4个字节，32个比特，存储空间为0~4,294,967,295
//	printf("%d\n", sizeof(double));//8个字节，64个比特，存储空间为0~18,446,744,073,709,551,615
//}
//int main()
//{
//	short age = 24;//向内存申请2个字节，16比特的存储空间来存放20，
//	float tall = 179.0;//像内存申请4个字节，32比特的存储空间来存放179.0
//	return 0
//}





//全局变量与局部变量
//
//int i = 100;
////定义在代码块{}之外的变量称为全局变量
//int main()
//{//定义在代码块之内的变量称为局部变量
//	//程序运行中优先使用局部变量
//	int i = 10;
//	printf("%d", a);
//	return 0;
//}




//计算两数之和
//int main() 
//{
//	//所有变量都必须放在代码块区域的前面部分
//	int sum = 0;
//	int num1 = 0;
//	int num2 = 0;
//	int num;
//	//sanf函数：输入数据
//	scanf("%d%d", &num1, &num2);//&取地址符号
//	sum = num1 + num2;
//	printf("sum=%d\n", sum);
//	return 0;
//}




//作用域与生命周期
//int main()
//{//局部变量的作用域在它的局部范围之内
//	//局部变量的生命周期是进入作用域开始，出去作用域结束
//
//	extern int a;//声明extern是外部标识符
//	//全局变量的作用域在整个工程
//	//全局变量的生命周期是程序运行开始，直至结束运行
//	printf("%d", a);
//	return 0;
//}

//
//#define max 10;
////常量与变量
//int main()
//{
//	int num = 10;//字面常量
//	//const-常属性
//	const int n = 4;//n值不可改，常变量
//	printf("%d", n);
//	int arr[max] = { 0 };
//
//	printf("%d",max);
//	return 0;
//}


////枚举常量
//enum sex
//{
//	male,
//	female,
//	secret
//};
////male,female,secret--枚举常量
//
//int main()
//{
//	enum sex s = male;
//	printf("%d\n", s);
//	printf("%d\n", male);
//	printf("%d\n", female);
//	printf("%d\n", secret);
//	return 0;
//}



//
////字符串类型
//int main()
//{
//	char arr[] = "abc";//字符串的结束标志是'\0',
//	char arr2[] = { 'a','b','c'};//结尾加上'\0'，输出结果如上一致
//	printf("%s\n", arr);
//	printf("%s\n", arr2);
//	printf("%d\n", strlen(arr));//strlen----string length字符串长度，计算方法是到\0截止计算
//	printf("%d\n", strlen(arr2));
//}



//转义字符
//转变字符原有的意思
//\n---换行
//\r---回车
//\ddd---1~3个8进制数字
//\xdd---2个十六进制数字




////选择语句
//int main()
//{
//	int input = 0;
//	printf("你会好好学习吗？（0/1）：");
//	scanf("%d", &input);
//	if (input == 1)
//		printf("好offer");
//	else
//		printf("失业");
//	return 0;
//
//}




////while循环
//int main()
//{
//	int line = 0;
//	printf("努力学习");
//	while(line<20000)
//	{
//		printf("敲代码：%d\n", line);
//		line++;
//	}
//	if (line >= 20000)
//		printf("好offer");
//}




////函数
//int Add(int x, int y)
//{
//	int z = x + y;
//	return z;
//}
//int main()
//{
//	int num1 = 10;
//	int num2 = 20;
//	int num3 = 0;
//	num3 = Add(num1, num2);
//	printf("%d\n", num3);
//	return 0;
//}




//
////数组
//int main()
//{
//	int arr[10] = { 0,1,2,3,4,5,6,7,8,9 };//定义一个含有10个数字的数组
//	//char arr[]
//	//float arr[]
//	int i = 0;
//	while(i<10)
//	{
//		printf("%d\n", arr[i]);
//		i++;
//	}
//	
//	return 0;
//}





//操作符
//算数操作符
//int main()
//{
//	int a = 5 / 2;
//	int b = 5 % 2;//取模，余数
//	printf("%d\n", a);
//	printf("%d\n", b);
//	return 0;
//}
// 
// 
//移位(二进制)操作符
//<<左移
//>>右移
//int main()
//{
//	int a = 1;//整型占4个字节，32个比特，00000000000000000000000000000001
//	int b=a << 1;                      //00000000000000000000000000000010
//	printf("%d\n", b);
//	return 0;
//}

//位（二进制）操作
//& 按位与（同为1为1，其余为零）
//| 按位或（有1为1，其余为零）
//^ 按位异或(相同为0，相异为1)
//int main()
//{
//	int a = 1;//001
//	int b = 2;//010
//	int c = a & b;//000
//	int d = a | b;//011
//	int e = a ^ b;//011
//	printf("%d\n", c);
//	printf("%d\n", d);
//	printf("%d\n", e);
//	return 0;
//}
//复合赋值符
//int main()
//{
//	a = a + 10;
//	a += 10;
//	a = a - 10;
//	a -= 10;
//	*= ;
//	<<=
//}

//单目操作符
//双目操作符
//三目操作符
// !a;!单目操作符（+正值，-负值，&取地址，sizeof操作数的类型长度，~对二进制数值取反,++）
//a + b;+双目操作符
//int main()
//{
//	int a = 10;//1010
//	int b = ~a;//0101
//	printf("%d\n", sizeof a);
//	printf("%d\n", b);
//	return 0;
//}
//int main()
//{
//	int a = 10;
//	int d = 10;
//	int b = a++;//后置++，先使用，再++
//	int c = ++d;//前置++，先++，后使用
//	printf("%d\n", a);
//	printf("%d\n", b);
//	printf("%d\n", d);
//	printf("%d\n", c);
//}
//转换类型
//int main()
//{
//	int a = (int)3.14;
//}





//逻辑操作符
//&&--逻辑与
//||--逻辑或
//int main()
//{
//	int a = 0;
//	int b = 5;
//	int c = a && b;
//	int d = a || b;
//	printf("%d\n", c);
//	printf("%d\n", d);
//	return 0;
//}



//条件操作符（三目操作符）
//exp1?exp2:exp3如果exp1成立则输出exp2,否则输出exp3
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int max;
//	max = (a > b ? a : b);//如果a>b成立则输出a,否则输出b
//	printf("%d\n", max);
//	return 0;
//}

//[]----下标引用操作符
//()----函数调用操作符



//原码，反码和补码
//有符号数：规定二进制的最高位确定它的正负，1为负，0为正
//只要是整数，内存中存储的都是二进制的补码
//正数---原码，反码，补码相同
//负数：
// 原码                ----》               反码                 ----》             补码
//直接按照正负                原码的符号位不变，               反码+1
//写出的二进制序列             其他按位取反
//-2
//10000000000000000000000000000010  原码
//11111111111111111111111111111101  反码
//11111111111111111111111111111110  补码





//关键字
//typedef---类型定义-类型重定义
//int main()
//{
//	typedef unsigned int u_int;
//	u_int a = 20;
//	unsigned int a = 20;
//}

//static修饰局部变量，使局部变量的生命周期变长
//      修饰全局变量，让静态的全局变量只能在自己所在的源文件内部使用，出了源文件就没法使用
//      修饰函数，改变了他的外部链接属性-----》内部链接属性
//int  get()
//{
//	static int a = 2;//a是一个静态的局部变量
//	//int a = 2;
//	a++;
//	printf("%d\n", a);
//}
//int main()
//{
//	int i = 0;
//	while (i < 5)
//	{
//		get();
//		i++;
//	}
//	return 0;
//
//}




//指针
//指针在32位电脑上是4个字节，在64位电脑上是8个字节
//int main()
//{
//	int a = 10;
//	int *p = &a;//有一种变量是用来存放地址的----指针变量
//	printf("%p\n", &a);
//	printf("%p\n", p);
//	*p = 20;//*解引用操作符
//	printf("%d\n", a);
//	printf("%d\n", sizeof(int*));
//	return 0;
//}




//结构体
//struct book
//{
//	char name[20];//c语言程序设计
//	int price;//55
//};
//int main()
//{//利用结构体类型创建一个结构体变量
//	struct book b1 ={ "c语言程序设计", 55 };
//	struct book* p = &b1;
//	printf("%d\n", p->name);
//	printf("%d\n", p->price);//->表示结构体指针中的成员
//	printf("%s\n", (*p).name);//.表示结构体变量中的成员
//	printf("%d\n", (*p).price);
//	printf("书名是%s\n", b1.name);
//	printf("价格是%d元\n", b1.price);
//	b1.price = 50;
//	printf("修改后的价格为%d元\n", b1.price);
//	return 0;
//}