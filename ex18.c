#include <stdio.h>

int main()
{
    int a[5]= {1, 2, 3, 4, 5};
    a[2]=32;
    printf("%d", a[4]);
    int b=0;
    while(b<5)
    {
        printf("%d",a[b]);
        b=b+1;
    }
}