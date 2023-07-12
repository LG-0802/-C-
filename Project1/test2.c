#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
//int main()
//{
//	char arr1[] =  "abc" ;
//	char arr2[] = { 'a','b','c' };
//	char arr3[] = { 'a','b','c' ,'\0'};
//	printf("%s\n", arr1);
//	printf("%s\n", arr2);
//	printf("%s\n", arr3);
//	return 0;
//}

//int main()
//{
//	char arr1[] = "abc";
//	char arr2[] = { 'a','b','c' ,'\0'}; // '\0'不算做字符串内容
//	printf("%d\n", strlen(arr1));
//	printf("%d\n", strlen(arr2));
//	//求字符串的长度
//	int len = strlen("abc");
//	printf("%d\n", len);
//	return 0;
//}

//printf("%d",100);
//printf("%c", "a");
//printf("%s", "abc");
//int main()
//{
//	printf("%c\n", '\'');
//	printf("%s\n", "abc");
//	printf("%s\n", "a");
//	printf("%s\n", "\"");
//	printf("%s\n", "'");
//	printf("%s\n","E:\\test\\test.c");
//	printf("\a");
//	printf("%c\n", '\130');
//	printf("%c\n", '\x30');
//	printf("%d\n", strlen("C:\test\328\test.c"));
//	return 0;
//}

//int main()
//{
//	int input = 0;
//	printf("加入比特:>\n");
//	printf("那要好好学习吗(1/0)？>:");
//	scanf("%d/n", &input);
//	if (input == 1)
//	{
//		printf("好offer\n");
//	}
//	else
//	{
//		printf("卖红薯");
//	}
//	return 0;
//}

//int main()
//{
//	int line = 0;
//	while (line < 30000)
//	{
//		printf("写代码:%d\n", line);
//		line++;
//	}
//	if (line == 30000)
//	{
//		printf("好offer\n");
//	}
//}

int Add(int x, int y)
{
	int z = 0;
	z = x + y;
	return z;
}
int main()
{
	int num1 = 0;
	int num2 = 0;
	scanf("%d%d", &num1, &num2);
	//函数的方式解决
	int sum = Add(num1, num2);
	printf("%d\n", sum);
	return 0;
}