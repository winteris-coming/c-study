#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
//int main()
//{
//	char arr1[10] = { 'a','b','c' };
//	int  arr2[10] = { 1,2,4,6, };//����ȫ��ʼ��ʣ�µ�Ԫ��Ĭ�ϳ�ʼ��Ϊ0
//	char arr3[] = "abcdef";
//	printf("%d\n", sizeof(arr3));//�����ڴ��С������\0�������ǲ�����
//	printf("%d\n", strlen(arr3));//�����ַ����ȣ�����\0��ֹ���⺯����Ҫͷ�ļ�
//}

//
////��ӡ�������Ԫ��
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




////����Ĵ洢
////������Ԫ�صĴ洢�������洢�ģ�ÿ��Ԫ����ռ�õĿռ���������������������
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




////������ά����
//int main()
//{
//	int arr[3][3] = { 1,2,5,4,6,7,9,8,5 };//�п���ʡ�ԣ��в���ʡ��
//	return 0;
//}




////��ά��������
//int main()
//{
//	int arr[3][3] = { 1,2,5,4,6,7,9,8,5 };//�п���ʡ�ԣ��в���ʡ��
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
////��ά����Ĵ洢
////��ά����Ĵ洢Ҳ�������洢�ģ�ֻ��arr[0][j]->arr[1][j]->arr[2][j]
//int main()
//{
//	int arr[3][3] = { 1,2,5,4,6,7,9,8,5 };//�п���ʡ�ԣ��в���ʡ��
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





////ð������
//void bubble_sort(int arr[],int sz)
//{
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < sz-1; i++)//ȷ��ð�����������
//	{
//		for (j = 0; j < sz - i - 1; j++)//ÿһ��ð������
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
//	//��Ϊ����
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





////�Ż�ð������
//void bubble_sort(int arr[],int sz)
//{
//	int flag = 1;
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < sz-1; i++)//ȷ��ð�����������
//	{
//		for (j = 0; j < sz - i - 1; j++)//ÿһ��ð������
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
//		if(flag==1)//������==���ڶ�������=��ֵ
//		{
//			break;
//		}
//	}
//}
//int main()
//{
//	int arr[10] = { 9,8,7,6,5,4,3,2,1,0 };
//	//��Ϊ����
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
////&������ȡ����������ĵ�һ��Ԫ�صĵ�ַ������ʾ�����������顣��˺�������ʱ������ݵ��������
////�����ͻᴫ��һ��Ԫ�صĵ�ַ
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