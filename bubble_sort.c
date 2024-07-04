#include<stdio.h>
int main()
{
    int a[30],i,j,n,temp;
    printf("enter the limit:");
    scanf("%d",&n);
    printf("enter the numbers:");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<n-1;j++)
        {
            if(a[j]>a[j+1])
            {
                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
        }
    }
            printf("\nafter bubble sorting:\n");
            for(i=0;i<n;i++)
            {
            printf("%d",a[i]);
            }
            return 0;
        }
