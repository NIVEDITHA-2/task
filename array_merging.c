#include<stdio.h>
#define N 5
int main()
{
    int a[N],b[N],c[N*2],i,index=0; 
    printf("\nEnter elements in first array:\n",N);
    for (i=0;i<N;i++)
    {
    scanf("%d\n",&a[i]);
    }
    printf("\nEnter elements in second array:\n",N);
    for(i=0;i<N;i++)
    {
    scanf("%d\n",&b[i]);
    }
    
    printf("combining a[%d] and b[%d] to form c[%d]\n:",N,N,N * 2);
    for(i=0;i<N;i++)
    c[index++]=a[i];

    for(i=0;i<N;i++)
    c[index++]=b[i];
    printf("Elements of array c[%d] are....\n",N * 2);
    for(i=0;i<(N * 2);i++)
    printf("%d",c[i]);
    return 0;
    
}