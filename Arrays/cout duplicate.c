//Program to count duplicate elements in an array

#include<stdio.h>

int main()
{
    int i,j,n,count=0,sum=0;
    printf("\nEnter number of elements:");
    scanf("%d",&n);

    int a[n],c[n];

    printf("\nEnter values:");
    for(i=0;i<n;i++)
     scanf("%d",&a[i]);

    for(i=0;i<n;i++)
    {
        count=0;
        for(j=i+1;j<n;j++)
        {
            if(a[i]==a[j])
            {
                count++;
                c[j]=0;
            }
        }
        if(c[i]!=0)
        {
            c[i]=count;
            sum+=count;
        }

    }
    printf("\nNo of duplicate elements are %d",sum);
}
