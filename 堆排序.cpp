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
//		//ѡ�������еĴ���
//		if (child + 1 < n && arr[child] < arr[child + 1])//ǰ�ᱣ֤���Һ��ӣ���ֹԽ��
//		{
//			child += 1;
//		}
//		//���ױȴ��Ӵ���
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
//	//����
//	int i = 0;//�Ӻ������ν��ѣ������һ��Ҷ�ڵ�ĸ��׿�ʼ
//	for (i = (n - 1 - 1) / 2; i >= 0 ; i--)
//	{
//		AdJustDwon(arr, n, i);
//	}
//	//����   ����ѴӺ���ȡ
//	int end = n - 1;
//	while (end > 0)
//	{
//		swap(&arr[0], &arr[end]);//�Ȱ��������������
//		AdJustDwon(arr, end, 0);//ʣ�µ������ٽ���
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