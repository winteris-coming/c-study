
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