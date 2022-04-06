#include "stack.h"
void ppp(int* arr, int left, int right)
{
	
	Stack st;
	StackInit(&st);
	StackPush(&st, right);
	StackPush(&st, left);
	while (!StackEmpty(&st))
	{
		int begin = StackTop(&st);
		StackPop(&st);
		int end = StackTop(&st);
		StackPop(&st);
		int KeyIndex = PartSort1(arr, begin, end);
		
		if (KeyIndex + 1 < end)
		{
			StackPush(&st, end);
			StackPush(&st, KeyIndex + 1);
		}
		if (begin < KeyIndex - 1)
		{
			StackPush(&st, KeyIndex - 1);
			StackPush(&st, begin);
		}
	}
	StackDestroy(&st);
}
int main()
{
	int arr[] = { 6,1,2,7,9,3,4,5,10,8 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	ppp(arr, 0, sz - 1);
	return 0;
}