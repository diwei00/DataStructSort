//#include <stdio.h>
//void BuppleSort(int* arr, int n)
//{
//	int j = 0;
//	for (j = 0; j < n - 1; j++)//总趟数
//	{
//		int i = 0;
//		for (i = 0; i < n - 1 - j; i++)//相邻两个元素比较，每走一趟会减少j个数据
//		{
//			if (arr[i] > arr[i + 1])
//			{
//				int tmp = arr[i];
//				arr[i] = arr[i + 1];
//				arr[i + 1] = tmp;
//			}
//		}
//	}
//}
//int main()
//{
//	int arr[] = {4,5,3,10,7 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	BuppleSort(arr, sz);
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//
//	return 0;
//}