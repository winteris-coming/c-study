//c语言是一门结构化的程序设计语言
//顺序结构
//选择结构(分支结构)
//循环结构
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
//		printf("未成年");
//	else if(a>=18&&a<40)
//		printf("青年");
//	else if (a>=40 &&a<60)
//		printf("中年");
//	else 
//		printf("老年");
//}




//判断一个数是否为奇数
//int main()
//{
//	int a;
//	scanf("%d", &a);
//	if (a % 2 == 1)
//		printf("奇数");
//	else
//		printf("偶数");
//	return 0;
//
//}
//输出0~100之间的奇数
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





//switch----多分支语句
//int main()
//{
//	int day=0;
//	scanf("%d", & day);
//	switch(day)
//	{
//	case 1:
//		printf("星期一");
//		break;
//	case 2:
//		printf("星期二\n");
//		break;
//	case 3:
//		printf("星期三\n");
//		break;
//	case 4:
//		printf("星期四\n");
//		break;
//	case 5:
//		printf("星期五\n");
//		break;
//	case 6:
//		printf("星期六\n");
//		break;
//	case 7:
//		printf("星期七\n");
//		break;
//	default:
//		printf("输入错误\n");
//		break;
//	}
//	return 0;
//}


//break用于结束这一循环
//continue用于跳过后面操作，重新再次循环
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
//for循环
//for(表达式1（初始化）；表达式2（判断）；表达式3（调整）)
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





//for循环的省略
//int main()
//{
//	int i = 0;
//	for(;;)//三个表达式都可以省略，但是判断一旦省略，判断会默认恒为真，从而导致程序无限死循环
//	{
//		printf("哈哈");
//	}
//}





//int main()
//{
//	int i;
//	int k;
//	for (i = 0, k = 0; k = 0; k++, i++)//k=0,把0赋值给了k，作为判断句，0为假，因此不执行
//	{
//		k++;
//		printf("%d\n", k);
//	}
//		
//	return 0;
//}




//do....while语句
//do
//{调整；语句}
//while(判断)
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




////计算阶乘
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
//		//ret = 1;//对ret进行初始化，否则第三步会出现意外情况
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



//遍历每个数字,查找数字
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

//二分查找算法
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
//			printf("找到了，数字是%d\n", arr[mid]);
//			break;
//		}
//
//		
//	}
//	return 0;
//}



//显示字符
//int main()
//{
//	char arr[] = "hello,world!";
//	char arr1[] = "############";
//	int left = 0;
//	//int right=sizeof(arr)/sizeof(arr[0])-2//存储字符时会有\n作为结束符占内存
//	int right = strlen(arr);
//	while (left <= right)
//	{
//		arr1[left] = arr[left];
//		arr1[right] = arr[right];
//		Sleep(100);
//		system("cls");//执行系统命令的一个函数-cls-清空屏幕
//		printf("%s\n", arr1);
//
//		left++;
//		right--;
//
//	}
//	
//	return 0;
//}




//登陆密码，三次错误即退出
//int main()
//{
//	char password[20] = {0};
//	int i = 0;
//	for (i = 0; i < 3; i++)
//	{
//		printf("请输入密码：");
//		scanf("%s", password);
//		if (strcmp(password, "123456") == 0)
//		{
//			printf("密码正确");
//			break;
//		}
//		else
//		{
//			printf("密码错误");
//		}
//	
//	}
//	if (i == 3)
//	{
//		printf("三次密码错误，已退出程序");
//	}
//	return 0;
//}







//
////猜数字游戏
//
//int menu()
//{
//	printf("########################################\n");
//	printf("请选择数字：0.退出  1.开始 \n");
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
//		printf("请猜数字");
//		//printf("%d", ret);
//		scanf("%d", &guess);
//	
//		if (guess > ret)
//		{
//			printf("大了");
//			printf("请再猜");
//
//		}
//		else if (guess < ret)
//		{
//			printf("小了");
//			printf("请再猜");
//
//		}
//		else
//		{
//			printf("恭喜你，猜对了！");
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
//			printf("输入数字错误，请重新输入数字");
//		}
//	} while (input);
//	return 0;
//}





////goto 语句
////通过goto语句可以实现跳转到哪一行执行
//int main()
//{
//	printf("hello,");
//	goto again;
//	printf("haha");
//again:
//	printf("world!");
//}





////定时关机
//int main()
//{
//	char input[20] = { 0 };
//again:
//	system("shutdown -s -t 60");//system是一个执行电脑命令行的函数，-s关机-t时间
//	printf("请输入我是猪，否则电脑将在60s后关机");
//	scanf("%s", input);
//	if (strcmp(input, "我是猪") == 0)
//	{
//		system("shutdown -a");
//		printf("电脑已取消关机");
//	}
//	else
//		goto again;
//
//	return 0;
//}