#include <stdio.h>
#include <string.h>
int main()
{
    int i;
    char a[20];
    char copy[20];
    fgets(a,20,stdin);
    for(i=0;a[i];i++)
    {
        copy[i]=a[i];
    }
    printf("coppied string -> %s",copy);
    printf("oreginal string -> %s",a);
}