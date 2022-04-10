#include <stdlib.h>
#include <stdio.h>
#include <string.h>
void CountSort(int* arr, int n)
{
	int max = arr[0];
	int min = arr[0];
	int i = 0;
	for (i = 0; i < n; i++)
	{
		if (arr[i] > max)//找最大的数据
		{
			max = arr[i];
		}
		if (arr[i] < min)//找最小的数据
		{
			min = arr[i];
		}
	}
	int range = max - min + 1;//确定区间，方便相对映射
	int* count = (int*)malloc(sizeof(int) * range);
	if (count == NULL)
	{
		return;
	}
	memset(count, 0, sizeof(int) * range);//初始化开辟数组数据为0
	//统计每个数据的次数
	int j = 0;
	for (j = 0; j < n; j++)
	{
		count[arr[j] - min]++;//相对映射位置
	}

	//按次数还原回去，数据还原的是下标
	i = 0;
	int k = 0;
	for (k = 0; k < range; k++)
	{
		while (count[k]--)
		{
			arr[i++] = k + min;
		}
	}
	free(count);
}
//int main()
//{
//	int arr[] = { 6,1,2,7,9,8,3 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//
//	CountSort(arr, sz);
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}