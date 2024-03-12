#include <stdio.h>

int main()
{
    float a;
    float b;
   
    printf("inserisci temperatura in Celsius\n");
    scanf("%f", &a);
    if(a < 0)
    {
        printf("errore");
    }
    if(a > 0)
    {
        b = 1.8 * a +32;
        printf("in fharenheit %f\n", b);
        printf("in kelvin %f\n", a +273.15);
    }

   
    }
