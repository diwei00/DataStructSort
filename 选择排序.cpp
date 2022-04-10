#include <stdio.h>
void swep(int* a, int* b)
{
	int tmp = *a;
	*a = *b;
	*b = tmp;
}
//void SelectSort(int* arr, int n)
//{
//	int end = n - 1;
//	while (end >= 0)
//	{
//		int i = 0;
//		int max = 0;
//		for (i = 0; i <= end; i++)
//		{
//			if (arr[i] > arr[max])
//			{
//				max = i;
//				
//			}
//		}
//		swep(&arr[max], &arr[end]);
//		end--;
//	}
//	
//}
void SelectSort2(int* arr, int n)
{
	int begin = 0;//前指针
	int end = n - 1;//后指针
	while (begin < end)
	{
		int max = begin;
		int min = begin;
		int i = 0;
		for (i = begin; i <= end ; i++)
		{
			if (arr[i] > arr[max])//找大
			{
				max = i;
			}
			if (arr[i] < arr[min])//找大
			{
				min = i;
			}
		}
		swep(&arr[begin], &arr[min]);//小的换前面
		swep(&arr[end], &arr[max]);//大的换后面
		begin++;
		end--;
	}
}

int main()
{
	int arr[] = { 6,1,2,7,9,8};
	int sz = sizeof(arr) / sizeof(arr[0]);
	//SelectSort(arr, sz);
	SelectSort2(arr, sz);
	int i = 0;
	for (i = 0; i < sz; i++)
	{
		printf("%d ", arr[i]);
	}
	return 0;
}