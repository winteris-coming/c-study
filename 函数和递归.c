
#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>




//����
//�ӳ��򣬳����һ���ִ��룬ӵ��һ���Ķ�����



//strcpy��destination,source�����������ÿ���
//int main()
//{
//	char arr1[] = "liu";
//	char arr2[] = "###########";
//	strcpy(arr2, arr1);
//	printf("%s\n", arr2);//�ַ����Ľ�����־��\0,��ʹ��strcpy���п���ʱ�����\0ͬʱ������ȥ������ֻ�����\0���н�ֹ
//	return 0;
//}


//
////memset(void* value num)������memory set�ڴ����ã������ڴ�
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
////��������
////��ʵ�δ��ݸ��β�ʱ���β���ʵ�ε���ʱ���������βεĸ��Ĳ�����Ӱ�쵽ʵ��
//void swap(int x,int y)//Ϊʲô�޷�������������Ϊx,y��a,b�ǲ�ͬ�ĵ�ַ���ö���ĺ���ֻ�ǽ�a,b��ֵ
//					//������x,y�ı�������������x,y��ֵ
//{
//	int tmp=0;
//	tmp = x;
//	x = y;
//	y = tmp;
//	
//}
//void swap2(int* px, int* py)//�ö���ĺ���ֱ�ӽ�a,b��ַ�ϵı��������˻���
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
////��ʽ��Ƕ��
//int main()
//{
//	printf("%d", printf("%d", printf("%d", 43)));//printf�������ص����ַ�����
//	return 0;
//}



////������������.h���棬����ʵ�ֹ��̷���.c����,ͨ��include���ú���
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
////�ݹ�
////������������һ�ֱ�̼���
//int main()
//{
//	printf("����");
//	main();//�ݹ飬����ִ��main()����ĳ���Ϊʲô�ᱨջ������󣿴洢�ռ仮��Ϊջ���洢�ֲ������ģ�
//	//���ѣ��洢��̬����������̬�����洢ȫ�ֱ�������ÿ��ִ��main(),����ջ���滮��һ��ռ䣬
//	//ִ��̫��main(),��ջ�Ŀռ䱻���ָɾ�֮��ͻᱨջ�������
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
//	/*printf("������һ����");
//	scanf("%d\n", &num);*/
//	print(num);
//	return 0;
//}


//
////дһ�������滻��strlen()�����������ַ����ĳ���
//int my_strlen(char* arr)
//{
//	int count = 0;
//	while(*arr != '\0')//�����ַ��õ����ţ��ַ�����˫����
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
//	num = my_strlen(arr);//arr�����飬���鴫�δ���ȥ�Ĳ����������飬���ǵ�һ���ַ��ĵ�ַ
//	printf("%d", num);
//	
//}




////�ݹ鷽��
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





//��n�Ľ׳�
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





//쳲������㷨�Ż�
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