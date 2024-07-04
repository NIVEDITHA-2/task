#include<stdio.h>
#include<string.h>
int main()
{
    char s[20];
    int i,j,len=0;
    printf("Enter the string:");
    gets(s);
    len=strlen(s);
    for(i=0;i<len;i++)
    {
        if(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u'||s[i]=='A'||s[i]=='E'||s[i]=='I'||s[i]=='O'||s[i]=='U')
        {
            for(j=i;j<len;j++)
            {
                s[j]=s[j+1];
            }
            len--;
            i--;
        }
    }
    printf("After deleting the vowels,the string will be :%s",s);
            return 0;
            }