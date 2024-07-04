#include<stdio.h>
int main()
{
    int a[5];
    int min,max,i,n;
      printf("Enter elements :");
      for(i=0;i<5;i++)
      scanf("%d",&a[i]);
       max=a[0];
        min=a[0];
        for(i=1;i<5;i++)
        {
    if(a[i]>max)
        max=a[i];
     if(a[i]<min)
        min=a[i];   
        }
    printf("largest element:%d\n smallest element:%d",max,min);
    return 0;
}


