//#include <stdio.h>
//#include <stdlib.h>
//void MergeSortNonR(int* arr, int n)
//{
//	int* tmp = (int*)malloc(sizeof(int) * n);
//	int gap = 1;
//	int i = 0;
//	while (gap < n)
//	{
//
//		for (i = 0; i < n; i += 2 * gap)
//		{
//			int begin1 = i;
//			int end1 = i + gap - 1;
//			int begin2 = i + gap;
//			int end2 = i + 2 * gap - 1;
//			//���������������
//			//û���ұ�����
//			if (begin2 >= n)
//			{
//				break;
//			}
//			//�����������ݣ�������ȫ
//			if (end2 >= n)
//			{
//				end2 = n - 1;
//			}
//
//			int index = i;
//			while (begin1 <= end1 && begin2 <= end2)
//			{
//				if (arr[begin1] < arr[begin2])
//				{
//					tmp[index] = arr[begin1];
//					begin1++;
//					index++;
//				}
//				else
//				{
//					tmp[index] = arr[begin2];
//					begin2++;
//					index++;
//				}
//			}
//			//���ǿյ����ݿ�����
//			while (begin1 <= end1)
//			{
//				tmp[index++] = arr[begin1++];
//			}
//			while (begin2 <= end2)
//			{
//				tmp[index++] = arr[begin2++];
//			}
//			//���źõ����ݿ���ԭ����
//			//�����������ݵ�������ֱ�ӽ��鲢�����ݿ�ԭ����,ʣ�µ����ݲ��ܣ�Ȼ���ٽ��й鲢
//			int j = 0;
//			for (j = i; j <= end2; j++)
//			{
//				arr[j] = tmp[j];
//			}
//		}
//		
//		gap *= 2;
//	}
//	free(tmp);
//}
//int main()
//{
//	int arr[] = { 6,1,2,7,9,3,4,5 ,8};
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	MergeSortNonR(arr, sz);
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//
//	return 0;
//}