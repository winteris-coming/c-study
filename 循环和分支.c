//c������һ�Žṹ���ĳ����������
//˳��ṹ
//ѡ��ṹ(��֧�ṹ)
//ѭ���ṹ
#define _CRT_SECURE_NO_WARNINGS 1
#include <string.h>
#include<windows.h>
#include<stdlib.h>
#include<time.h>
#include <stdio.h>

//if-----else
//int main()
//{
//	float a;
//	scanf("%d", &a);
//	if (a < 18)
//		printf("δ����");
//	else if(a>=18&&a<40)
//		printf("����");
//	else if (a>=40 &&a<60)
//		printf("����");
//	else 
//		printf("����");
//}




//�ж�һ�����Ƿ�Ϊ����
//int main()
//{
//	int a;
//	scanf("%d", &a);
//	if (a % 2 == 1)
//		printf("����");
//	else
//		printf("ż��");
//	return 0;
//
//}
//���0~100֮�������
//int main()
//{
//	int i = 0;
//	while (i <= 100)
//	{
//		i++;
//		if (i % 2 == 1)
//			printf("%d\n",i);
//		
//	}
//	return 0;
//}





//switch----���֧���
//int main()
//{
//	int day=0;
//	scanf("%d", & day);
//	switch(day)
//	{
//	case 1:
//		printf("����һ");
//		break;
//	case 2:
//		printf("���ڶ�\n");
//		break;
//	case 3:
//		printf("������\n");
//		break;
//	case 4:
//		printf("������\n");
//		break;
//	case 5:
//		printf("������\n");
//		break;
//	case 6:
//		printf("������\n");
//		break;
//	case 7:
//		printf("������\n");
//		break;
//	default:
//		printf("�������\n");
//		break;
//	}
//	return 0;
//}


//break���ڽ�����һѭ��
//continue����������������������ٴ�ѭ��
//int main()
//{
//	int i = 0;
//	while(i <= 10)
//	{
//		if (i == 5)
//			continue;
//		printf("%d\n", i);
//		i++;
//
//	}
//	return 0;
//}




//
//int main()
//{
//	char ch = 0;
//	//ctrl+z----EOF----end of file
//	while((ch=getchar())!=EOF)
//	{
//		putchar(ch);
//	}
//	return 0;
//}





//
//forѭ��
//for(���ʽ1����ʼ���������ʽ2���жϣ������ʽ3��������)
//{ }
//int main()
//{
//	int i = 0;
//	for(i=1;i<=10;i++)
//	{
//		printf("%d\n", i);
//	}
//	return 0;
//}





//forѭ����ʡ��
//int main()
//{
//	int i = 0;
//	for(;;)//�������ʽ������ʡ�ԣ������ж�һ��ʡ�ԣ��жϻ�Ĭ�Ϻ�Ϊ�棬�Ӷ����³���������ѭ��
//	{
//		printf("����");
//	}
//}





//int main()
//{
//	int i;
//	int k;
//	for (i = 0, k = 0; k = 0; k++, i++)//k=0,��0��ֵ����k����Ϊ�жϾ䣬0Ϊ�٣���˲�ִ��
//	{
//		k++;
//		printf("%d\n", k);
//	}
//		
//	return 0;
//}




//do....while���
//do
//{���������}
//while(�ж�)
//int main()
//{
//	int i=0;
//	do
//	{
//		
//		printf("%d\n", i);
//		i++;
//	} while (i < 10);
//	return 0;
//}




////����׳�
//int main()
//{
//	int i;
//	int n=1;
//	int c=1;
//	scanf("%d",&c);
//	for (i = 1; i<=c; i++)
//	{
//		n = i*n;
//		printf("%d\n", n);
//	}
//	return 0;
//}




//1!+2!+3!
//int main()
//{
//	int i=0;
//	int s = 0;
//	int n=0;
//	int sum=0;
//	int ret=1;
//	scanf("%d", &s);
//	for (n= 1; n <=s; n++)//1  2   3
//	{
//		//ret = 1;//��ret���г�ʼ�������������������������
//		//for (i = 1; i <= n; i++)
//		//{
//		//	ret = ret * i;//1  1*1*2   2*1*2*3
//		//	
//		//}
//		//sum = sum + ret;//1   3    9
//
//		ret = ret * n;
//		sum = sum + ret;
//
//	}
//	printf("%d", sum);
//	return 0;
//}



//����ÿ������,��������
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int k = 7;
//	int i = 0;
//	while(arr[i]!=k)
//	{
//		i++;
//	}
//	printf("%d", arr[i]);
//	return 0;
//}

//���ֲ����㷨
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int k = 7;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int left = 0;
//	int right = sz - 1;
//	
//	while (left <= right)
//	{
//		int mid = (left + right) / 2;
//		if (arr[mid] < k)
//			left = mid + 1;
//		else if (arr[mid] > k)
//			right = mid - 1;
//		else
//		{
//			printf("�ҵ��ˣ�������%d\n", arr[mid]);
//			break;
//		}
//
//		
//	}
//	return 0;
//}



//��ʾ�ַ�
//int main()
//{
//	char arr[] = "hello,world!";
//	char arr1[] = "############";
//	int left = 0;
//	//int right=sizeof(arr)/sizeof(arr[0])-2//�洢�ַ�ʱ����\n��Ϊ������ռ�ڴ�
//	int right = strlen(arr);
//	while (left <= right)
//	{
//		arr1[left] = arr[left];
//		arr1[right] = arr[right];
//		Sleep(100);
//		system("cls");//ִ��ϵͳ�����һ������-cls-�����Ļ
//		printf("%s\n", arr1);
//
//		left++;
//		right--;
//
//	}
//	
//	return 0;
//}




//��½���룬���δ����˳�
//int main()
//{
//	char password[20] = {0};
//	int i = 0;
//	for (i = 0; i < 3; i++)
//	{
//		printf("���������룺");
//		scanf("%s", password);
//		if (strcmp(password, "123456") == 0)
//		{
//			printf("������ȷ");
//			break;
//		}
//		else
//		{
//			printf("�������");
//		}
//	
//	}
//	if (i == 3)
//	{
//		printf("��������������˳�����");
//	}
//	return 0;
//}







//
////��������Ϸ
//
//int menu()
//{
//	printf("########################################\n");
//	printf("��ѡ�����֣�0.�˳�  1.��ʼ \n");
//	
//}
//int game()
//{
//	int ret = 0;
//
//	int guess = 0;
//
//	ret = rand() % 100 + 1;
//	while (1)
//	{
//		printf("�������");
//		//printf("%d", ret);
//		scanf("%d", &guess);
//	
//		if (guess > ret)
//		{
//			printf("����");
//			printf("���ٲ�");
//
//		}
//		else if (guess < ret)
//		{
//			printf("С��");
//			printf("���ٲ�");
//
//		}
//		else
//		{
//			printf("��ϲ�㣬�¶��ˣ�");
//			break;
//		}
//	}
//}
//
//int main()
//{
//	srand((unsigned int)time(NULL));
//	int input = 0;
//	do
//	{
//		menu();
//		scanf("%d", &input);
//		if(input==1)
//		{
//			game();
//			
//		}
//		else if (input == 0)
//		{
//			break;
//		}
//		else
//		{
//			printf("�������ִ�����������������");
//		}
//	} while (input);
//	return 0;
//}





////goto ���
////ͨ��goto������ʵ����ת����һ��ִ��
//int main()
//{
//	printf("hello,");
//	goto again;
//	printf("haha");
//again:
//	printf("world!");
//}





////��ʱ�ػ�
//int main()
//{
//	char input[20] = { 0 };
//again:
//	system("shutdown -s -t 60");//system��һ��ִ�е��������еĺ�����-s�ػ�-tʱ��
//	printf("������������������Խ���60s��ػ�");
//	scanf("%s", input);
//	if (strcmp(input, "������") == 0)
//	{
//		system("shutdown -a");
//		printf("������ȡ���ػ�");
//	}
//	else
//		goto again;
//
//	return 0;
//}