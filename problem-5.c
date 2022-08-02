#include<stdio.h>
int main()
{
    char a[20];
    int i;
    fgets(a,20,stdin);
    for(i=0;a[i];i++)
    {
        if(a[i]>=65 && a[i]<=90)
        a[i]=a[i]+32;
    }
    printf("%s",a);
}