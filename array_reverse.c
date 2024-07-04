#include<stdio.h>
#define N 5
int main()
{
    int a[N];
    int i;
    printf("enter the integers:",N);
    for(i=0;i<N;i++)
        scanf("%d",&a[i]);
    printf("the reverse of the array are:\n");
    for(i=N-1;i>=0;i--)
        {
            printf("%d\n",a[i]);
        }
        return 0;
    }
    


    
