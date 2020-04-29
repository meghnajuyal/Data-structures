#include <stdio.h>

int findPivot(int *arr, int left, int right)
{
   if (right < left)
       return -1;
   if (right== left)
       return left;
   int mid = (left + right)/2;
   if (mid < right&& arr[mid] > arr[mid + 1])
       return mid;
   if (mid> left && arr[mid] < arr[mid- 1])
       return mid-1;
   if (arr[left] >= arr[mid])
   {
       return findPivot(arr, left, mid-1);
   } else
   {
       return findPivot(arr, mid + 1, right);
   }
}
int main()
{
    int i,size;
    printf("Enter the size of array\n");
	scanf("%d",&size);

	int arr[size];

	printf("Enter elements\n");
	for(i=0;i<size;i++)
	{
		scanf("%d",&arr[i]);
	}




    printf("The given array is :  ");
	for(i = 0; i < size; i++)
	{
	 printf("%d  ", arr[i]);
    }
    printf("\n");
    printf("The Pivot Element in the array is : %d \n", arr[findPivot(arr, 0, size-1) + 1]);
    return 0;
}
