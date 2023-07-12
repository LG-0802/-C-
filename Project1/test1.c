#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//int main()
//{
//	printf("比特\n");
//	return 0;
//	//字符类型
//	char ch = 'a';
//	//整型
//	int age = 20;
//	//短整型
//	short num = 10;
//	//long
//	//long long
//	//单精度浮点型
//	float weight = 55.5;
//	//双精度浮点型
//	double d = 0.0;
//
//	return 0;
//}

//int main()
//{
//	printf("hehe\n");
//	printf("比特\n");
//	printf("%d\n", 100); //打印一个数字 - %d
//	//sizeof - 关键字 - 操作符 - 计算类型或变量所占空间的大小
//
//	printf("%d\n", sizeof(char));
//	printf("%d\n", sizeof(short));
//	printf("%d\n", sizeof(int));
//	printf("%d\n", sizeof(long));
//	printf("%d\n", sizeof(long long));
//	printf("%d\n", sizeof(float));
//	printf("%d\n", sizeof(double));
//	return 0;
//}

//int main()
//{
//	int age = 20 ;
//	double weight = 56.2 ;
//	age = age + 1;
//	weight = weight - 1;
//	printf("%d\n", age);
//	printf("%lf\n", weight);
//	return 0;
//}
//// %d - 整型
//// %f - float
//// %lf - double

//int main()
//{
//	int a = 0;
//	int b = 0;
//	int sum = 0;
//	//scanf函数是输入函数
//	scanf("%d %d", &a, &b);
//	sum = a + b;
//	printf("sum = %d\n", sum);
//	return 0;
// }

//int main()
//{
//	//数组
//	int arr[10] = { 0 };
//	//输入
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		scanf("%d", &arr[i] );
//	}
//	//找最大值
//	int max = arr[0];
//	for ( i = 1; i < 10; i++)
//	{
//		if(arr[i] > max)
//		{
//			max = arr[i];
//		}
//	}
//	//输出
//	printf("max = %d\n", max);
//	return 0;
//}

//int main()
//{
//	//数组
//	int arr[10] = { 0 };
//	//输入,求和
//	int i = 0;
//	int sum = 0;
//	for ( i = 0; i < 10; i++)
//	{
//		scanf("%d",&arr[i]);
//		sum = sum + arr[i];
//	}
//	////求和
//	//int sum = 0;
//	//for ( i = 0; i < 10; i++)
//	//{
//	//	sum = sum + arr[i];
//	//}
//	//求平均值
//	int avg = sum / 10;
//	printf("avg=%d\n", avg);
//	return 0;
//}

//int main()
//{
//	int arr[10] = { 0 };
//	int i = 0;
//	int sum = 0;
//	for ( i = 0; i < 10; i++)
//	{
//		scanf("%d", &arr[i]);
//		sum = sum + arr[i];
//	}
//	int avg = sum / 10;
//	printf("avg=%d\n", avg);
//	return 0;
//}

//enum Sex
//{
//	MALE,
//	FEMALE,
//	SECRET,
//};
//int main()
//{
//	//字面常量
//	// 3.14;
//	// 4;
//	
//	//const修饰的常变量
//	const int sum = 10; //sum是常变量，本质属性是变量
//
//	//#define定义的标识符常量
//	#define max 10000
//	int n = max;
//	printf("n=%d\n", n);
//
//	//枚举常量
//	enum Sex s = MALE;
//	printf("%d\n", MALE);
//	printf("%d\n", FEMALE);
//	printf("%d\n", SECRET);
//}