//#include <stdio.h>
//void swap(int* child, int* parent)
//{
//	int tmp = *child;
//	*child = *parent;
//	*parent = tmp;
//}
//void AdJustDwon(int* arr, int n, int root)
//{
//	int parent = root;
//	int child = parent * 2 + 1;
//	while (child < n)
//	{
//		//选出左右中的大孩子
//		if (child + 1 < n && arr[child] < arr[child + 1])//前提保证有右孩子，防止越界
//		{
//			child += 1;
//		}
//		//父亲比大孩子大则换
//		if (arr[child] > arr[parent])
//		{
//			swap(&arr[child], &arr[parent]);
//			parent = child;
//			child = parent * 2 + 1;
//		}
//		else
//		{
//			break;
//		}
//	}
//}
//void HeapSort(int* arr, int n)
//{
//	//建堆
//	int i = 0;//从后面依次建堆，从最后一个叶节点的父亲开始
//	for (i = (n - 1 - 1) / 2; i >= 0 ; i--)
//	{
//		AdJustDwon(arr, n, i);
//	}
//	//升序   建大堆从后面取
//	int end = n - 1;
//	while (end > 0)
//	{
//		swap(&arr[0], &arr[end]);//先把最大的数放最后面
//		AdJustDwon(arr, end, 0);//剩下的数据再建堆
//		end--;
//	}
//}
//int main()
//{
//	int arr[] = {3,5,2,7,8,6,1,9,4,0};
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int root = 0;
//	AdJustDwon(arr,sz,root);
//	HeapSort(arr, sz);
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}