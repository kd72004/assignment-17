#include<stdio.h>
int main()
{
    char a[20],m;
    int count;
    int i;
    fflush(stdin);
    fgets(a,20,stdin);
    scanf("%c",&m);
    for(i=0;a[i];i++)
    {
        if(a[i]==m)
        count++;
    }
    printf("%d",count);
}