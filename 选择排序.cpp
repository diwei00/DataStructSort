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
	int begin = 0;//ǰָ��
	int end = n - 1;//��ָ��
	while (begin < end)
	{
		int max = begin;
		int min = begin;
		int i = 0;
		for (i = begin; i <= end ; i++)
		{
			if (arr[i] > arr[max])//�Ҵ�
			{
				max = i;
			}
			if (arr[i] < arr[min])//�Ҵ�
			{
				min = i;
			}
		}
		swep(&arr[begin], &arr[min]);//С�Ļ�ǰ��
		swep(&arr[end], &arr[max]);//��Ļ�����
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