//rotate array n number of times

#include<stdio.h>

int main()
{
	int i,size,n,temp;
	printf("Enter size of array\n");
	scanf("%d",&size);
	int a[size],b[size];
	printf("enter values:");
	for(i=0;i<size;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("Enter number of rotaions\n");
	scanf("%d",&n);

	for(i=0;i<size;i++)
      b[i]=a[(i+(size-n))%size];
    printf("\nAfter %d rotations array is:",n);
    for(i=0;i<size;i++)
        printf("%d ",b[i]);
}
