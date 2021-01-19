#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <cmath>

int main()
{
	int num1, num2;
	scanf("%d%d", &num1, &num2);
	int i = 0;
	for (i = (num1 > num2 ? num2 : num1); i >= 1; i--)
	{
		if (num1 % i == 0 && num2 % i == 0)
		{
			printf("%d", i);
			break;
		}
	}
	return 0;
}





void fun18()
{
	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
	int sz = sizeof(arr) / sizeof(arr[0]);

	int right = sz - 1;
	int left = 0;
	int mid = (left + right) / 2;

	printf("请输入你要查询的数字:>");
	int input;
	scanf("%d", &input);

	while (left <= right)
	{
		if (input < arr[mid])
		{
			right = mid - 1;
		}
		else if (input > arr[mid])
		{
			left = mid + 1;
		}
		else
		{
			printf("找到了，%d的下标为:> %d ", input, mid);
			break;
		}
	}
	if (left > right)
	{
		printf("没找到 %d 这个数字。", input);
	}
}

void fun15()
{
	int i = 0, j = 0;
	for (i = 1; i <= 9; i++)
	{
		for (j = 1; j <= i; j++)
		{
			printf("%d x %d = %d ", j, i, i*j);
		}
		printf("\n");
	}
	printf("\n");

}

void fun14()
{
	int arr[] = { 0,1,2,3,4,5,6,7,8,9 };
	int i = 0;
	int max = arr[0];
	for (i = 1; i < 10; i++)
	{
		if (max < arr[i])
			max = arr[i];
	}
	printf("%d\n", max);
}

void fun13()
{
	int i = 0;
	float sum = 0;
	for (i = 1; i <= 100; i++)
	{
		if (i % 2 == 0)
		{
			sum += -1.0 / i;
		}
		else
		{
			sum += 1.0 / i;
		}
	}
	printf("%f", sum);
}

void fun12()
{
	int ret = 0;
	int i = 0;
	for (i = 1; i <= 100; i++)
	{
		int num1 = i % 10;
		int num2 = i / 10 % 10;
		if (num1 == 9)
			ret++;
		if (num2 == 9)
			ret++;
	}
	printf("%d", ret);
}

int prime(int num)
{
	int i = 0;
	for (i = 2; i < sqrt(num); i++)
	{
		if (num % i == 0)
		{
			return 0;
			break;
		}
	}
	return 1;
}

void fun11()
{
	int i = 0;
	for (i = 100; i <= 200; i++)
	{
		if (prime(i))
		{
			printf("%d ", i);
		}
	}
}

void fun10()
{
	int i = 0;
	for (i = 1; i <= 100; i++)
	{
		if (i % 3 == 0)
		{
			printf("%d ", i);
		}
	}
}




//int a[] = { 1, 2, 3, 4, 5, 6, 7, 8 };
//int input;
//scanf("&d", &input);
//int sz = sizeof(a) / sizeof(a[0]);
//int right = sz - 1;
//int left = 0;
//int mid = (left + right) / 2;
//
//while (left <= right)
//{
//	if (input > a[mid])
//	{
//		left = mid + 1;
//	}
//	else if (input < a[mid])
//	{
//		right = mid - 1;
//	}
//	else
//	{
//		printf("找到了！");
//		break;
//	}
//}

//printf("\n");

//if (left > right)
//{
//	printf("没找到！");
//}
//return 0;