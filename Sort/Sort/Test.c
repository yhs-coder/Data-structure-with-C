#define _CRT_SECURE_NO_WARNINGS
#include"Sort.h"


PrintArray(int* a, int n)
{
	int i = 0;
	for (i = 0; i < n; i++)
	{
		printf("%d ", a[i]);
	}
}
void TestQuickSort()
{
	int a[] = { 49,38,65,97,76,13,27 };
	int n = sizeof(a) / sizeof(a[0]);
	QuickSort(a, 0, n - 1);
	PrintArray(a, n);
}
int main()
{
	TestQuickSort();
	return 0;
}