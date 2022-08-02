#include<stdio.h>
int main()
{
    int i,count=0;
    char a[20];
    fgets(a,20,stdin);
    for(i=0;a[i];i++)
    {
        if(a[i]=='a'|| a[i]=='e' || a[i]=='i' || a[i]=='o' || a[i]=='u' )
        {
            count++;
        }
    }
    printf("%d",count);
}