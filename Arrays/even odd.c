//Segregate even and odd numbers


#include<stdio.h>


int main()
{
    int i,n,j=0,k=0;
    printf("\nEnter number of elements:");
    scanf("%d",&n);

    int a[n],e[n],o[n];

    printf("\nEnter values:");
    for(i=0;i<n;i++)
    {
      scanf("%d",&a[i]);
      if(a[i]%2==0)
      {
          e[j]=a[i];
          j++;
      }
      else
      {
          o[k]=a[i];
          k++;
      }
    }
    printf("\nEven array:");
    for(i=0;i<j;i++)
        printf("%d ",e[i]);
    printf("\nOdd array:");
    for(i=0;i<k;i++)
        printf("%d ",o[i]);
}
