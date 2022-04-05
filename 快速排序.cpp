#include <stdio.h>
void InSort(int* arr, int n)
{

	int i = 0;
	for (i = 0; i < n - 1; i++)
	{
		int end = i;
		int tmp = arr[end + 1];
		while (end >= 0)
		{
			if (arr[end + 1] < arr[end])
			{

				arr[end + 1] = arr[end];
				arr[end] = tmp;
				end--;
			}
			else
			{
				break;
			}

		}
		arr[end + 1] = tmp;
	}


}
void swep(int* a, int* b)
{
	int tmp = *a;
	*a = *b;
	*b = tmp;
}
int GetMidIndex(int* arr,int left, int right)
{
	int mid = (left + right) >> 1;
	if (arr[mid] < arr[right])
	{
		if (arr[left] > arr[right])
		{
			return right;
		}
		else if (arr[left] < arr[right] && arr[left] > arr[mid])
		{
			return left;
		}
		else
		{
			return mid;
		}
	}
	else
	{
		if (arr[left] < arr[right])
		{
			return right;
		}
		else if (arr[left] > arr[right] && arr[left] < arr[mid])
		{
			return left;
		}
		else
		{
			return mid;
		}
	}
}
//����ָ�뷨
int PartSort2(int* arr, int left, int right)
{
	int index = GetMidIndex(arr, left, right);//��λȡ�У���ֹ����
	swep(&arr[left], &arr[index]);//

	int begin = left;
	int end = right;
	int key = begin;
	while (begin < end)
	{
		while (begin < end && arr[end] >= arr[key])
		{
			end--;
		}
		while (begin < end && arr[begin] <= arr[key])
		{
			begin++;
		}
		swep(&arr[begin], &arr[end]);
	}
	swep(&arr[begin],&arr[key]);
	return begin;
	
}
//�ڿӷ�
int PartSort1(int* arr, int left, int right)
{
	int index = GetMidIndex(arr, left, right);//��λȡ�У���ֹ����
	swep(&arr[left], &arr[index]);//

	int begin = left;
	int end = right;
	int pivot = begin;

	int key = arr[begin];
	while (begin < end)
	{
		while (begin < end && arr[end] >= key)
		{
			end--;
		}
		arr[pivot] = arr[end];
		pivot = end;
		while (begin < end && arr[begin] <= key)
		{
			begin++;
		}
		arr[pivot] = arr[begin];
		pivot = begin;

	}
	pivot = begin;
	arr[pivot] = key;
	return pivot;

}
void QuickSort(int* arr, int left, int right)
{
	if (left >= right)
	{
		return ;
	}
	int pivot = PartSort2(arr, left, right);
	if (pivot - 1 - left > 10)//�ݹ����Ϊ��ͷ�����٣����ú����࣬���ò�������
	{
		QuickSort(arr, left, pivot - 1);
	}
	else
	{
		InSort(arr + left, pivot - 1 - left + 1);
	}
	if (right - (pivot + 1) > 10)
	{
		QuickSort(arr, pivot + 1, right);
	}
	else
	{
		InSort(arr + pivot + 1, right - (pivot + 1) + 1);
	}
}
int main()
{
	int arr[] = { 6,1,2,7,9,3,4,5,10,8 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	QuickSort(arr, 0, sz - 1);
	/*PartSort2(arr, 0, sz - 1);*/
	int i = 0;
	for (i = 0; i < sz; i++)
	{
		printf("%d ", arr[i]);
	}
	return 0;
}