//#include <stdio.h>
//void ShellSort(int* arr, int n)
//{
//	int i = 0;
//	int gap = n;
//	while (gap > 0)
//	{
//		gap = gap / 2;//Ҫ�����ö��Ԥ���򣬵�Ҫ��֤gap���һ��Ϊ1�����в�������
//		//gap > 1 Ԥ����ӽ�����
//		//gap = 1 ��������  ����
//		/*gap = gap / 3 + 1;*/  //��֤���һ��gapΪ1
//		for (i = 0; i < n - gap; i++)//�Ѽ��Ϊgap������ͬʱ��
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