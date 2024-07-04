#include<stdio.h>
int main()
{
    char string[100];
    int i,l;
    printf("enter a string:\n");
    scanf("%s",&string);
    for(i=0;string[i]!=0;i++)
    {
    l++;
    }
    printf("length of the input string:%d",i);
    return 0;

}