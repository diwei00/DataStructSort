//#include <stdio.h>
//void ShellSort(int* arr, int n)
//{
//	int i = 0;
//	int gap = n;
//	while (gap > 0)
//	{
//		gap = gap / 2;//要经历好多次预排序，但要保证gap最后一次为1，进行插入排序
//		//gap > 1 预排序接近有序
//		//gap = 1 插入排序  有序
//		/*gap = gap / 3 + 1;*/  //保证最后一次gap为1
//		for (i = 0; i < n - gap; i++)//把间隔为gap的数据同时排
//		{
//			int end = i;
//			int tmp = arr[end + gap];
//			while (end >= 0)
//			{
//				if (arr[end + gap] < arr[end])
//				{
//					arr[end + gap] = arr[end];
//					arr[end] = tmp;
//					end -= gap;
//				}
//				else
//				{
//					break;
//				}
//			}
//			arr[end + gap] = tmp;
//		}
//	}
//}
//int main()
//{
//	int arr[] = { 9,8,7,6,5,4,3,2,1,0 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	ShellSort(arr, sz);
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}