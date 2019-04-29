#include<stdio.h>
#include<conio.h>

void merge()
{
        int a[20],b[20],c[40];
        int m,n,p,i,j;

        printf("\nEnter the no of the array elements:\t");
        scanf("%d",&n);
        printf("\nEnter the elements for the array:\n");
        for(i=0;i<n;i++)
        {
                scanf("%d",&a[i]);
        }

        printf("\nEnter the no of the second array:\t");
        scanf("%d",&m);
        printf("\nEnter the elements for second array:\n");
        for(i=0;i<m;i++)
        {
                scanf("%d",&b[i]);
        }
        for(i=0,j=0;i<n;i++,j++)
        {
                c[j]=a[i];
        }
        for(i=0;i<m;i++,j++)
        {
                c[j]=b[i];
        }
        p=n+m;
        printf("\nArray elements after merging:\n");
        for(i=0;i<p;i++)
        {
                printf("%d\t",c[i]);
        }
}

int main()
{
    merge();
}
