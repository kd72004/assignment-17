#include<stdio.h>
int main()
{
    char a[20];
    int i;
    fgets(a,20,stdin);
    for( i=0;a[i]!='\0';i++);
    printf("%d",i);
}