
#define _CRT_SECURE_NO_WARNINGS 1

//����ͷ�ļ�
#include <stdio.h>
// ��ӡ���
//int main()
//{
//	//ʹ��printf(print��ӡfounction���� )�������
//	/*printf("hello,world!\n");
//	return 0;*/
//}




//��������
//int main()
//{	
//
//	//char ch = 'a';
//	//printf("%c\n", ch);//%c��ӡ�ַ���ʽ������
//	//return 0;
//
//	//int i = 20;
//	//printf("%d\n", i);//%d��ӡ����ʮ��������
//	//return 0;
//
//	/*float tall = 179.0;
//	printf("%f\n", tall);//%f��ӡ����������
//	return 0;*/
//
//	/*double height = 59.0;
//	printf("%lf\n", height);//��ӡ˫���ȸ���������
//	return 0;*/
//}




//ÿ������������ռ�õĿռ�
//int main()
//{
//	printf("%d\n", sizeof(short));//2���ֽڣ�16���أ��洢�ռ�Ϊ0~65535
//	printf("%d\n", sizeof(float));//4���ֽڣ�32���أ��洢�ռ�Ϊ0~4,294,967,295
//	printf("%d\n", sizeof(int));//4���ֽڣ�32�����أ��洢�ռ�Ϊ0~4,294,967,295
//	printf("%d\n", sizeof(char));//1���ֽڣ�8�����أ��洢�ռ�Ϊ0~255
//	printf("%d\n", sizeof(long long));//8���ֽڣ�64�����أ��洢�ռ�Ϊ0~18,446,744,073,709,551,615
//	printf("%d\n", sizeof(long));//4���ֽڣ�32�����أ��洢�ռ�Ϊ0~4,294,967,295
//	printf("%d\n", sizeof(double));//8���ֽڣ�64�����أ��洢�ռ�Ϊ0~18,446,744,073,709,551,615
//}
//int main()
//{
//	short age = 24;//���ڴ�����2���ֽڣ�16���صĴ洢�ռ������20��
//	float tall = 179.0;//���ڴ�����4���ֽڣ�32���صĴ洢�ռ������179.0
//	return 0
//}





//ȫ�ֱ�����ֲ�����
//
//int i = 100;
////�����ڴ����{}֮��ı�����Ϊȫ�ֱ���
//int main()
//{//�����ڴ����֮�ڵı�����Ϊ�ֲ�����
//	//��������������ʹ�þֲ�����
//	int i = 10;
//	printf("%d", a);
//	return 0;
//}




//��������֮��
//int main() 
//{
//	//���б�����������ڴ���������ǰ�沿��
//	int sum = 0;
//	int num1 = 0;
//	int num2 = 0;
//	int num;
//	//sanf��������������
//	scanf("%d%d", &num1, &num2);//&ȡ��ַ����
//	sum = num1 + num2;
//	printf("sum=%d\n", sum);
//	return 0;
//}




//����������������
//int main()
//{//�ֲ������������������ľֲ���Χ֮��
//	//�ֲ����������������ǽ���������ʼ����ȥ���������
//
//	extern int a;//����extern���ⲿ��ʶ��
//	//ȫ�ֱ���������������������
//	//ȫ�ֱ��������������ǳ������п�ʼ��ֱ����������
//	printf("%d", a);
//	return 0;
//}

//
//#define max 10;
////���������
//int main()
//{
//	int num = 10;//���泣��
//	//const-������
//	const int n = 4;//nֵ���ɸģ�������
//	printf("%d", n);
//	int arr[max] = { 0 };
//
//	printf("%d",max);
//	return 0;
//}


////ö�ٳ���
//enum sex
//{
//	male,
//	female,
//	secret
//};
////male,female,secret--ö�ٳ���
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
////�ַ�������
//int main()
//{
//	char arr[] = "abc";//�ַ����Ľ�����־��'\0',
//	char arr2[] = { 'a','b','c'};//��β����'\0'������������һ��
//	printf("%s\n", arr);
//	printf("%s\n", arr2);
//	printf("%d\n", strlen(arr));//strlen----string length�ַ������ȣ����㷽���ǵ�\0��ֹ����
//	printf("%d\n", strlen(arr2));
//}



//ת���ַ�
//ת���ַ�ԭ�е���˼
//\n---����
//\r---�س�
//\ddd---1~3��8��������
//\xdd---2��ʮ����������




////ѡ�����
//int main()
//{
//	int input = 0;
//	printf("���ú�ѧϰ�𣿣�0/1����");
//	scanf("%d", &input);
//	if (input == 1)
//		printf("��offer");
//	else
//		printf("ʧҵ");
//	return 0;
//
//}




////whileѭ��
//int main()
//{
//	int line = 0;
//	printf("Ŭ��ѧϰ");
//	while(line<20000)
//	{
//		printf("�ô��룺%d\n", line);
//		line++;
//	}
//	if (line >= 20000)
//		printf("��offer");
//}




////����
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
////����
//int main()
//{
//	int arr[10] = { 0,1,2,3,4,5,6,7,8,9 };//����һ������10�����ֵ�����
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





//������
//����������
//int main()
//{
//	int a = 5 / 2;
//	int b = 5 % 2;//ȡģ������
//	printf("%d\n", a);
//	printf("%d\n", b);
//	return 0;
//}
// 
// 
//��λ(������)������
//<<����
//>>����
//int main()
//{
//	int a = 1;//����ռ4���ֽڣ�32�����أ�00000000000000000000000000000001
//	int b=a << 1;                      //00000000000000000000000000000010
//	printf("%d\n", b);
//	return 0;
//}

//λ�������ƣ�����
//& ��λ�루ͬΪ1Ϊ1������Ϊ�㣩
//| ��λ����1Ϊ1������Ϊ�㣩
//^ ��λ���(��ͬΪ0������Ϊ1)
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
//���ϸ�ֵ��
//int main()
//{
//	a = a + 10;
//	a += 10;
//	a = a - 10;
//	a -= 10;
//	*= ;
//	<<=
//}

//��Ŀ������
//˫Ŀ������
//��Ŀ������
// !a;!��Ŀ��������+��ֵ��-��ֵ��&ȡ��ַ��sizeof�����������ͳ��ȣ�~�Զ�������ֵȡ��,++��
//a + b;+˫Ŀ������
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
//	int b = a++;//����++����ʹ�ã���++
//	int c = ++d;//ǰ��++����++����ʹ��
//	printf("%d\n", a);
//	printf("%d\n", b);
//	printf("%d\n", d);
//	printf("%d\n", c);
//}
//ת������
//int main()
//{
//	int a = (int)3.14;
//}





//�߼�������
//&&--�߼���
//||--�߼���
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



//��������������Ŀ��������
//exp1?exp2:exp3���exp1���������exp2,�������exp3
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int max;
//	max = (a > b ? a : b);//���a>b���������a,�������b
//	printf("%d\n", max);
//	return 0;
//}

//[]----�±����ò�����
//()----�������ò�����



//ԭ�룬����Ͳ���
//�з��������涨�����Ƶ����λȷ������������1Ϊ����0Ϊ��
//ֻҪ���������ڴ��д洢�Ķ��Ƕ����ƵĲ���
//����---ԭ�룬���룬������ͬ
//������
// ԭ��                ----��               ����                 ----��             ����
//ֱ�Ӱ�������                ԭ��ķ���λ���䣬               ����+1
//д���Ķ���������             ������λȡ��
//-2
//10000000000000000000000000000010  ԭ��
//11111111111111111111111111111101  ����
//11111111111111111111111111111110  ����





//�ؼ���
//typedef---���Ͷ���-�����ض���
//int main()
//{
//	typedef unsigned int u_int;
//	u_int a = 20;
//	unsigned int a = 20;
//}

//static���ξֲ�������ʹ�ֲ��������������ڱ䳤
//      ����ȫ�ֱ������þ�̬��ȫ�ֱ���ֻ�����Լ����ڵ�Դ�ļ��ڲ�ʹ�ã�����Դ�ļ���û��ʹ��
//      ���κ������ı��������ⲿ��������-----���ڲ���������
//int  get()
//{
//	static int a = 2;//a��һ����̬�ľֲ�����
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




//ָ��
//ָ����32λ��������4���ֽڣ���64λ��������8���ֽ�
//int main()
//{
//	int a = 10;
//	int *p = &a;//��һ�ֱ�����������ŵ�ַ��----ָ�����
//	printf("%p\n", &a);
//	printf("%p\n", p);
//	*p = 20;//*�����ò�����
//	printf("%d\n", a);
//	printf("%d\n", sizeof(int*));
//	return 0;
//}




//�ṹ��
//struct book
//{
//	char name[20];//c���Գ������
//	int price;//55
//};
//int main()
//{//���ýṹ�����ʹ���һ���ṹ�����
//	struct book b1 ={ "c���Գ������", 55 };
//	struct book* p = &b1;
//	printf("%d\n", p->name);
//	printf("%d\n", p->price);//->��ʾ�ṹ��ָ���еĳ�Ա
//	printf("%s\n", (*p).name);//.��ʾ�ṹ������еĳ�Ա
//	printf("%d\n", (*p).price);
//	printf("������%s\n", b1.name);
//	printf("�۸���%dԪ\n", b1.price);
//	b1.price = 50;
//	printf("�޸ĺ�ļ۸�Ϊ%dԪ\n", b1.price);
//	return 0;
//}