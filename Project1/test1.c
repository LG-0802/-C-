#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//int main()
//{
//	printf("����\n");
//	return 0;
//	//�ַ�����
//	char ch = 'a';
//	//����
//	int age = 20;
//	//������
//	short num = 10;
//	//long
//	//long long
//	//�����ȸ�����
//	float weight = 55.5;
//	//˫���ȸ�����
//	double d = 0.0;
//
//	return 0;
//}

//int main()
//{
//	printf("hehe\n");
//	printf("����\n");
//	printf("%d\n", 100); //��ӡһ������ - %d
//	//sizeof - �ؼ��� - ������ - �������ͻ������ռ�ռ�Ĵ�С
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
//// %d - ����
//// %f - float
//// %lf - double

//int main()
//{
//	int a = 0;
//	int b = 0;
//	int sum = 0;
//	//scanf���������뺯��
//	scanf("%d %d", &a, &b);
//	sum = a + b;
//	printf("sum = %d\n", sum);
//	return 0;
// }

//int main()
//{
//	//����
//	int arr[10] = { 0 };
//	//����
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		scanf("%d", &arr[i] );
//	}
//	//�����ֵ
//	int max = arr[0];
//	for ( i = 1; i < 10; i++)
//	{
//		if(arr[i] > max)
//		{
//			max = arr[i];
//		}
//	}
//	//���
//	printf("max = %d\n", max);
//	return 0;
//}

//int main()
//{
//	//����
//	int arr[10] = { 0 };
//	//����,���
//	int i = 0;
//	int sum = 0;
//	for ( i = 0; i < 10; i++)
//	{
//		scanf("%d",&arr[i]);
//		sum = sum + arr[i];
//	}
//	////���
//	//int sum = 0;
//	//for ( i = 0; i < 10; i++)
//	//{
//	//	sum = sum + arr[i];
//	//}
//	//��ƽ��ֵ
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
//	//���泣��
//	// 3.14;
//	// 4;
//	
//	//const���εĳ�����
//	const int sum = 10; //sum�ǳ����������������Ǳ���
//
//	//#define����ı�ʶ������
//	#define max 10000
//	int n = max;
//	printf("n=%d\n", n);
//
//	//ö�ٳ���
//	enum Sex s = MALE;
//	printf("%d\n", MALE);
//	printf("%d\n", FEMALE);
//	printf("%d\n", SECRET);
//}