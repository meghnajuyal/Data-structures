//To find frequency of each element

#include<stdio.h>

int main()
{
    int i,j,n,count;
    printf("\nEnter number of elements:");
    scanf("%d",&n);

    int a[n],c[n];

    printf("\nEnter values:");
    for(i=0;i<n;i++)
     scanf("%d",&a[i]);

    for(i=0;i<n;i++)
    {
        count=1;
        for(j=i+1;j<n;j++)
        {
            if(a[i]==a[j])
            {
                count++;
                c[j]=0;
            }
        }
        if(c[i]!=0)
            c[i]=count;

    }
    printf("Element  Frequency");

    for(i=0;i<n;i++)
    {
        if(c[i]!=0)
            printf("\n%d\t %d",a[i],c[i]);
    }

}
