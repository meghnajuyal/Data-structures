//multiply any 2 matrices
#include<stdio.h>
#include<conio.h>
int m,n,p,q;
void input(int x[][10],int r,int c)
{
  int i,j;
  for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        scanf("%d",&x[i][j]);
 }
}

void show(int x[][10],int m,int q)
{
     int i,j;
     for(i=0;i<m;i++)
     {               printf("\n");
                     for(j=0;j<q;j++)
                     printf("%d ",x[i][j]);
     }
}


void multiply(int a[][10],int b[][10],int m,int n,int q)
{
     int i,j,k;
     int c[10][10];
     for(i=0;i<m;i++)
	{
		for(j=0;j<q;j++)
		{
			c[i][j]=0;
			for(k=0;k<n;k++)
				c[i][j]+=a[i][k]*b[k][j];
		}
    }
    printf("\n Matrices after multiplication are: ");
    show(c,m,q);
}

int main()
{
    printf("\n Enter no. of rows of matrix 1: ");
    scanf("%d",&m);
    printf("\n Enter no. of columns of matrix 1: ");
    scanf("%d",&n);
    printf("\n Enter no. of rows of matrix 2: ");
    scanf("%d",&p);
    printf("\n Enter no. of columns of matrix 2: ");
    scanf("%d",&q);
    int a[m][n];
    int b[p][q];
    if(n==p)
    {
            printf("\n Matrices can be multiplied");
            printf("\n Input matrix 1: ");
            input(a,m,n);
            printf("\n Input matrix 2: ");
            input(b,p,q);
            multiply(a,b,m,n,q);
    }
    else
        printf("\n Sorry matrices can't be multiplied");
    getch();
    return 0;
}
