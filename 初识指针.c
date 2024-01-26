
#include<stdio.h>


////指针
////存放地址的变量
//int main()
//{
//	int a = 10;
//	int* p = &a;//p就是指针变量
//
//}





////指针数据类型的作用
//int main()
//{
//	int a = 0x11223344;
//	/*printf("%d\n", sizeof(int*));
//	printf("%d\n", sizeof(char*));//所有数据类型的指针都是一样的大小
//	printf("%d\n", sizeof(float*));
//	printf("%d\n", sizeof(double*));*/
//	int* pa = &a;
//	char* pc = &a;
//	//printf("%d\n", pa);
//	//printf("%d\n", pc);//存放的都是同一个地址
//	//指针变量解引用时，根据其数据类型可访问空间的大小（字符更改一个字节，整形更改4个字节）
//	//*pa = 0;
//	*pc = 0;
//	//printf("%d\n", a);
//	printf("%d\n", a);
//	return 0;
//
//}






////指针类型：决定了指针的步长
//int main()
//{
//	int a = 10;
//	int* pa = &a;
//	char* pc = &a;
//	printf("%d\n", pa);
//	printf("%d\n", pa+1);
//	printf("%d\n", pc);
//	printf("%d\n", pc+1);
//	return 0;
//}





////利用指针修改数组的值
//int main()
//{
//	int arr[10] = { 0 };
//	int* pa = &arr;//数组首元素的地址
//	char* pc = &arr;
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		//*(pa + i) = 1;
//		*(pc + i) = 1;
//		
//		
//	}
//	printf("%d", arr);
//	return 0;
//
//}





//野指针
//指针所指向的地址，随机，且未知
//成因：1指针变量未初始化
//int main()
//{
//	int* p;
//	*p = 20;//局部变量不初始化
// int*p=Null;//当不给指针变量赋值时，可以赋值给它Null，
//}
//2.指针越界访问
//int main()
//{
//	int arr[10] = { 0 };
//	int* p = &arr;
//	int i = 0;
//	for (i = 0; i < 13; i++)
//	{
//		p++;
//	}
//}
//3.指针指向的空间释放
//int* test()
//{
//	int a = 20;
//	return &a;
//}
//int main()
//{
//	int* p = test();
//	*p = 20;
//}






////指针+-整数
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int* p = &arr;
//	for (i=0;i<sz;i++)
//	{
//		printf("%d\n", *p);
//		p+=2;
//	}
//	return 0;
//}





////指针+-指针
//int main()
//{
//	char arr1[5] = { 0 };
//	int arr[10] = { 0,1,2,3,4,5,6,7,8,9 };
//	int* p = &arr;
//	printf("%d\n", &arr[9] - &arr[0]);//9个步长
//	printf("d\n", &arr[9] - &arr1[0]);//不允许两种指针类型相减
//
//	return 0;
//}





////利用指针求字符串长度
//int my_str(char* str)
//{
//	char* start = str;
//	char* end = str;
//	while (*end != '\0')
//	{
//		end++;
//		printf("%d\n", end);
//	}
//	return end - start;
//}
//int main()
//{
//	char str[] = "hello";
//	int len = my_str(str);
//	printf("%d\n", len);
//	return 0;
//
//}





////指针比较
////标准规定：允许指向数组元素的指针指向数组最后一个元素后面的那个内存相比较，但不允许与指向第一个元素之前的那个内存位置相比较
//#define N_VALUES 5
//int main()
//{
//	float values[N_VALUES];
//	float* vp;
//	for (vp = &values[N_VALUES]; vp > &values[0];)
//	{
//		*--vp = 0;
//	}
//	/*for (vp = &values[N_VALUES]; vp >= &values[0]; vp--)
//	{
//		*vp = 0;//不建议这种写法
//	}*/
//}






////数组名
//int main()
//{
//	int arr[10] = { 0 };
//	printf("%p\n", arr);//首元素的地址
//	printf("%p\n", arr+1);
//
//	printf("%p\n", &arr[0]);
//	printf("%p\n", &arr[0]+1);
//
//	printf("%p\n", &arr);//首元素的地址，但代表的是整个数组的地址
//	printf("%p\n", &arr+1);
//	
//	
//	return 0;
//}





////数组通过指针来进行访问
//int main()
//{
//	int arr[10] = { 0,1,2,3,4,5,6,7,8,9 };
//	int* p = arr;
//	int i = 0;
//	
//
//	for (i = 0; i < 10; i++)
//	{
//		printf("%p==========%p\n", p+i, &arr[i]);
//	}
//	return 0;
//}






////二级指针
//int main()
//{
//	int a = 10;//变量
//	int* pa = &a;//指针变量，存放变量的地址
//	int** ppa = &pa;//二级指针，存放指针变量的地址
//	printf("%p\n", &pa);
//	printf("%p\n", ppa);
//	return 0;
//}





////指针数组---存放指针的数组
//int main()
//{
//	int a = 10, b = 20, c = 30;
//	int* arr[3] = { &a,&b,&c };
//	int i = 0;
//	for (i = 0; i < 3; i++)
//	{
//		printf("%d\n", *(arr[i]));
//	}
//	return 0;
//}