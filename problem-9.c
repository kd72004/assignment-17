#include <stdio.h>
#include <string.h>
int main()
{
    int a[7]={'k','a','l','y','a','n','i'};
    int i,j,temp;
    for(i=0;i<6;i++)
    {
        for(int j=i+1;j<=6;j++)
        {
            if(a[i]==a[j])
            continue;
            if(a[i]<a[j])
            {
                temp=a[j];
                a[j]=a[i];
                a[i]=temp;
            }

        }
    }
    for(i=0;i<7;i++)
    {
        printf("%c",a[i]);
    }
}