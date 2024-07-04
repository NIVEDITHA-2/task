#include<stdio.h>
# define max 50
int main()
{
    int n,a[max],b[max],i,s,j;
    printf("Enter the limit :");
    scanf("%d",&n);
     printf("Enter the numbers : ");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Enter the postion where we want to rotate : ");
    scanf("%d",&s);
    for ( i = 0; i < s; i++)
    {
       b[i]=a[i];
    }
    printf("Array after rotate to left : ");
    j=s;
    for(i=0;i<n-s;i++)
    {
        a[i]=a[j];  
        j++;       
        printf("%d ",a[i]);
    }
    j=0;
    for(i=n-s;i<n;i++)
    {
        a[i]=b[j];
        j++;
        printf("%d ",a[i]);
    }
    return 0;
}
