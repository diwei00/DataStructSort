//#include <stdio.h>
//void BuppleSort(int* arr, int n)
//{
//	int j = 0;
//	for (j = 0; j < n - 1; j++)//������
//	{
//		int i = 0;
//		for (i = 0; i < n - 1 - j; i++)//��������Ԫ�رȽϣ�ÿ��һ�˻����j������
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