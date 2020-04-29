//Tranpsoe of matrix

#include<stdio.h>

int main()
{
    int n,i,j;
    printf("\n Enter size of matrix: ");
    scanf("%d",&n);
    int a[n][n];

    printf("\n Enter elements of matrix: ");
    for(i=0;i<n;i++)
        for(j=0;j<n;j++)
          scanf("%d",&a[i][j]);



    printf("\n Transpose of matrix is: \n");
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
          printf("%d\t",a[j][i]);

          printf("\n");
    }

    return 0;
}
