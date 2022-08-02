#include <stdio.h>
#include <string.h>
int main()
{
    char a[20];
    int alph = 0, digits = 0, special_characters = 0;
    fgets(a, 20, stdin);
    for (int i = 0; a[i]; i++)
    {
        if (a[i] >= 65 && a[i] <= 90 || a[i] >= 97 && a[i] <= 122)
            alph++;
        else if (a[i] >= 48 && a[i] <= 57)
            digits++;
        else
            special_characters++;
    }
    printf("alphbates -> %d\n",alph);
    printf("digits -> %d\n",digits);
    printf("special_characters -> %d\n",special_characters);
}