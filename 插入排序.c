//#include <stdio.h>
//void InSort(int* arr, int n)//ʱ�临�ӶȰ������Ȳ�����  O(N2��
//{
//	int i = 0;
//	for (i = 0; i < n - 1; i++)//����end��n-1��
//	{
//		int end = i;
//		int tmp = arr[end + 1];//Ҫ���н����������ȰѺ������������
//		while (end >= 0)
//		{
//			if (arr[end + 1] < arr[end])
//			{
//				arr[end + 1] = arr[end];
//				arr[end] = tmp;
//				end--;
//			}
//			else
//			{
//				break;//�������������
//				      //һ��while������һ��Bbreak����
//
//			}
//		}
//		arr[end + 1] = tmp;
//		
//	}
//}
//int main()
//{
//	int arr[] = {1,2,0};
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	InSort(arr, sz);
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	
//	return 0;
//}