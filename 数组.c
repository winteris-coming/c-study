#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
//int main()
//{
//	char arr1[10] = { 'a','b','c' };
//	int  arr2[10] = { 1,2,4,6, };//不完全初始化剩下的元素默认初始化为0
//	char arr3[] = "abcdef";
//	printf("%d\n", sizeof(arr3));//计算内存大小，包括\0，并且是操作符
//	printf("%d\n", strlen(arr3));//计算字符长度，数到\0截止，库函数需要头文件
//}

//
////打印输出数组元素
//int main()
//{
//	int arr[] = { 0,1,2,5,6,8,9,4 };
//	int i = 0;
//	int size = sizeof(arr) / sizeof(arr[0]);
//	for (i = 0; i <size;++i)
//	{
//		printf("%d\n", arr[i]);
//	}
//	return 0;
//}




////数组的存储
////数组内元素的存储是连续存储的，每个元素所占用的空间由它的数据类型来决定
//int main()
//{
//	int arr[] = { 0,1,2,5,6,8,9,4 };
//	int i = 0;
//	int size = sizeof(arr) / sizeof(arr[0]);
//	for (i = 0; i < size; ++i)
//	{
//		printf("&arr[%d]=%p\n", i, &arr[i]);
//	}
//	return 0;
//}




////创建二维数组
//int main()
//{
//	int arr[3][3] = { 1,2,5,4,6,7,9,8,5 };//行可以省略，列不可省略
//	return 0;
//}




////二维数组的输出
//int main()
//{
//	int arr[3][3] = { 1,2,5,4,6,7,9,8,5 };//行可以省略，列不可省略
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < 3; ++i)
//	{
//		for (j = 0; j < 3; ++j)
//		{
//			printf("%d", arr[i][j]);
//
//		}
//		printf("\n");
//
//	}
//	return 0;
//}





//
////二维数组的存储
////二维数组的存储也是连续存储的，只是arr[0][j]->arr[1][j]->arr[2][j]
//int main()
//{
//	int arr[3][3] = { 1,2,5,4,6,7,9,8,5 };//行可以省略，列不可省略
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < 3; ++i)
//	{
//		for (j = 0; j < 3; ++j)
//		{
//			printf("&arr[%d][%d]=%p\n",i,j,&arr[i][j]);
//
//		}
//		printf("\n");
//
//	}
//	return 0;
//}





////冒泡排序
//void bubble_sort(int arr[],int sz)
//{
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < sz-1; i++)//确定冒泡排序的趟数
//	{
//		for (j = 0; j < sz - i - 1; j++)//每一趟冒泡排序
//		{
//			if (arr[j] > arr[j + 1])
//			{
//				int tmp = 0;
//				tmp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = tmp;
//
//			}
//		}
//	}
//}
//int main()
//{
//	int arr[10] = { 9,8,7,6,5,4,3,2,1,0 };
//	//改为升序
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int n = 0;
//	bubble_sort(arr, sz);
//	for (n = 0; n < 10; n++)
//	{
//		printf("%d\n", arr[n]);
//	}
//	return 0;
//}
//





////优化冒泡排序
//void bubble_sort(int arr[],int sz)
//{
//	int flag = 1;
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < sz-1; i++)//确定冒泡排序的趟数
//	{
//		for (j = 0; j < sz - i - 1; j++)//每一趟冒泡排序
//		{
//			if (arr[j] > arr[j + 1])
//			{
//				int tmp = 0;
//				tmp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = tmp;
//				flag = 0;
//			}
//		}
//		if(flag==1)//必须是==等于而不能是=赋值
//		{
//			break;
//		}
//	}
//}
//int main()
//{
//	int arr[10] = { 9,8,7,6,5,4,3,2,1,0 };
//	//改为升序
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int n = 0;
//	bubble_sort(arr, sz);
//	for (n = 0; n < 10; n++)
//	{
//		printf("%d\n", arr[n]);
//	}
//	return 0;
//}








//
////arr,arr[0],&arr
////&数组名取出的是数组的第一个元素的地址，但表示的是整个数组。因此函数传参时如果传递的是数组的
////话，就会传第一个元素的地址
//int main()
//{
//	int arr[10] = { 0,1,2,3,4,5,6,7,8,9 };
//	printf("%p\n", arr);
//	printf("%p\n", arr+1);
//	printf("%p\n", &arr[0]);
//	printf("%p\n", &arr[0]+1);
//	printf("%p\n", &arr);
//	printf("%p\n", &arr+1);
//	return 0;
//}