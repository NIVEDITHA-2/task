#include<stdio.h>
#include<string.h>
int main()
{
   char a[15],b[15];
    int i,l1,l2,max;
    printf("Enter the string:");
    scanf("%s",a);
    printf("Enter the substring to be found:");
    scanf("%s",b);
    l1=strlen(a);
    l2=strlen(b);
    max=l1-l2;
    for(i=0;i<=max;i++)
        if(strncmp(a+i,b,l2)==0)
        break;
    if(i<=max)
        printf("\n string found at index:%d",i);
        else
        printf("\n string not found");
        return 0;
    }

