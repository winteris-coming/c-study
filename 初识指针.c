
#include<stdio.h>


////ָ��
////��ŵ�ַ�ı���
//int main()
//{
//	int a = 10;
//	int* p = &a;//p����ָ�����
//
//}





////ָ���������͵�����
//int main()
//{
//	int a = 0x11223344;
//	/*printf("%d\n", sizeof(int*));
//	printf("%d\n", sizeof(char*));//�����������͵�ָ�붼��һ���Ĵ�С
//	printf("%d\n", sizeof(float*));
//	printf("%d\n", sizeof(double*));*/
//	int* pa = &a;
//	char* pc = &a;
//	//printf("%d\n", pa);
//	//printf("%d\n", pc);//��ŵĶ���ͬһ����ַ
//	//ָ�����������ʱ���������������Ϳɷ��ʿռ�Ĵ�С���ַ�����һ���ֽڣ����θ���4���ֽڣ�
//	//*pa = 0;
//	*pc = 0;
//	//printf("%d\n", a);
//	printf("%d\n", a);
//	return 0;
//
//}






////ָ�����ͣ�������ָ��Ĳ���
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





////����ָ���޸������ֵ
//int main()
//{
//	int arr[10] = { 0 };
//	int* pa = &arr;//������Ԫ�صĵ�ַ
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





//Ұָ��
//ָ����ָ��ĵ�ַ���������δ֪
//����1ָ�����δ��ʼ��
//int main()
//{
//	int* p;
//	*p = 20;//�ֲ���������ʼ��
// int*p=Null;//������ָ�������ֵʱ�����Ը�ֵ����Null��
//}
//2.ָ��Խ�����
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
//3.ָ��ָ��Ŀռ��ͷ�
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






////ָ��+-����
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





////ָ��+-ָ��
//int main()
//{
//	char arr1[5] = { 0 };
//	int arr[10] = { 0,1,2,3,4,5,6,7,8,9 };
//	int* p = &arr;
//	printf("%d\n", &arr[9] - &arr[0]);//9������
//	printf("d\n", &arr[9] - &arr1[0]);//����������ָ���������
//
//	return 0;
//}





////����ָ�����ַ�������
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





////ָ��Ƚ�
////��׼�涨������ָ������Ԫ�ص�ָ��ָ���������һ��Ԫ�غ�����Ǹ��ڴ���Ƚϣ�����������ָ���һ��Ԫ��֮ǰ���Ǹ��ڴ�λ����Ƚ�
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
//		*vp = 0;//����������д��
//	}*/
//}






////������
//int main()
//{
//	int arr[10] = { 0 };
//	printf("%p\n", arr);//��Ԫ�صĵ�ַ
//	printf("%p\n", arr+1);
//
//	printf("%p\n", &arr[0]);
//	printf("%p\n", &arr[0]+1);
//
//	printf("%p\n", &arr);//��Ԫ�صĵ�ַ�������������������ĵ�ַ
//	printf("%p\n", &arr+1);
//	
//	
//	return 0;
//}





////����ͨ��ָ�������з���
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






////����ָ��
//int main()
//{
//	int a = 10;//����
//	int* pa = &a;//ָ���������ű����ĵ�ַ
//	int** ppa = &pa;//����ָ�룬���ָ������ĵ�ַ
//	printf("%p\n", &pa);
//	printf("%p\n", ppa);
//	return 0;
//}





////ָ������---���ָ�������
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