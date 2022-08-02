#include <stdio.h>
#include <string.h>
int main()
{
    int i,count=0;
    char a[20],f;
    fgets(a,20,stdin);
    printf("\n Enter character for find frequency in string -> ");
        fflush(stdin);
    scanf("%c",&f);
    for(i=0;a[i];i++)
    {
        if(a[i]==f)
        count++;
    }
    printf("frequency of %c is %d",f,count);
}