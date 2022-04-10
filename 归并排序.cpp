//#include <stdlib.h>
//#include <stdio.h>
//void _MergeSort(int* arr, int left, int right, int* tmp)
//{
//	if (left >= right)
//	{
//		return;
//	}
//	int mid = (left + right) >> 1;//求中间值下标
//
//	_MergeSort(arr, left, mid, tmp);
//	_MergeSort(arr, mid + 1, right, tmp);
//	int begin1 = left;
//	int end1 = mid;
//	int begin2 = mid + 1;
//	int end2 = right;
//	int index = left;
//	while (begin1 <= end1 && begin2 <= end2)
//	{
//		if (arr[begin1] < arr[begin2])
//		{
//			tmp[index] = arr[begin1];
//			begin1++;
//			index++;
//		}
//		else
//		{
//			tmp[index] = arr[begin2];
//			begin2++;
//			index++;
//		}
//	}
//	//将非空的数据拷进来
//	while (begin1 <= end1)
//	{
//		tmp[index++] = arr[begin1++];
//	}
//	while (begin2 <= end2)
//	{
//		tmp[index++] = arr[begin2++];
//	}
//	//将排好的数据拷回原数组
//	int i = 0;
//	for (i = left; i <= right; i++)
//	{
//		arr[i] = tmp[i];
//	}
//}
//void MergeSort(int* arr, int n)
//{
//	int* tmp = (int*)malloc(sizeof(int) * n);
//	if (tmp == NULL)
//	{
//		return;
//	}
//	_MergeSort(arr, 0, n - 1, tmp);
//	free(tmp);
//}
//int main()
//{
//	int arr[] = { 6,1,2,7,9,3,4,5,10,8 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	MergeSort(arr, sz);
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//}