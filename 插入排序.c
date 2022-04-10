//#include <stdio.h>
//void InSort(int* arr, int n)//时间复杂度按最坏的算等差数列  O(N2）
//{
//	int i = 0;
//	for (i = 0; i < n - 1; i++)//控制end在n-1处
//	{
//		int end = i;
//		int tmp = arr[end + 1];//要进行交换，所以先把后面的数存起来
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
//				break;//两种情况跳出：
//				      //一种while结束，一种Bbreak跳出
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