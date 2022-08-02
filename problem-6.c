#include<stdio.h>
#include<string.h>
int main()
{
    char a[20],r[20];
    int i,j=0;
    int length;
    fgets(a,20,stdin);
    length=strlen(a);
    // for(i=0;a[i];i++)
    // {
    //     r[length]=a[i];
    //     length--;
    // }
    for(i=length;i>=0;i--)
    {
        r[j++]=a[i];
    }
    for(i=0;r[i];i++)
    {
        printf("%c",r[i]);
    }
}