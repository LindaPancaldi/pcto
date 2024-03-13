#include <stdio.h>

int main()
{
    char a[20];
    int b=0;
    printf("metti una parola\n");
    scanf(" %s", a);
    printf("|%s|", a);
    while (a[b]!= '\0');
    {
        printf("%s\n",a);
        if( a[b] >=97 && a[b] <= 122)
        {
            a[b] = a[b] - 32;
        }
        else if(a[b] >= 65 && a[b] <= 90)
        {
            a[b]= a[b] + 32;
        }
        b = b + 1;
    }   
}