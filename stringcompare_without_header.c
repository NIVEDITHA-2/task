#include<stdio.h>
int main()
{
    int i,flag=0;
    char a[10],b[10];
    printf("Enter the first string:");
    gets(a);
    printf("Enter the second string:");
    gets(b);
    for(i=0;a[i]!='\0' && b[i]!='\0';i++)
    {
        if (a[i]!=b[i])
        {
          flag=1;
          break;
        }
    }
         if(flag==0)
         printf("the string is same");
         else
            printf("the string is different");

           return 0;
    }
