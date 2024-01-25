
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