
//spiral form of matrix
#include<stdio.h>

int m,n;

void spiralPrint(int a[m][n])
{
    int i, k = 0, l = 0;

    while (k < m && l < n) {

        for (i = l; i < n; ++i) {
            printf("%d ",a[k][i]);
        }
        k++;


        for (i = k; i < m; ++i) {
           printf("%d ",a[i][n - 1] );
        }
        n--;


        if (k < m) {
            for (i = n - 1; i >= l; --i) {
                printf("%d ",a[m - 1][i]);
            }
            m--;
        }


        if (l < n) {
            for (i = m - 1; i >= k; --i) {
                printf("%d ",a[i][l]);
            }
            l++;
        }
    }
}
int main()
{

	int i, j;
	printf("Enter number of rows and columns\n");
	scanf("%d %d",&m,&n);

	int a[m][n];
	printf("Enter the Matrix\n");
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
    printf("\nMatrix is :\n");
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
         {
            printf("%d ",a[i][j]);
          }
         printf("\n");
    }
    printf("Spiral Form\n");
    spiralPrint(a);
}
