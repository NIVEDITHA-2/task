#include<stdio.h>
int main()
{
    char a[20],b[20];
    int i,j;
    printf("Enter the first string:");
    gets(a);
    printf("Enter the second string:");
    gets(b);
    for(i=0;a[i]!='\0';i++)
    {
        printf("%c",a[i]);
    }
        for(j=0;b[j]!='\0';j++)
        {
            printf("%c",b[j]);
        }
        a[i]=b[j];
        i++;
        a[i]='\0';
        printf("\n");
        return 0;
        
    }

