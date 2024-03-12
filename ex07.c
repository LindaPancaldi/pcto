#include <stdio.h>

int main()
{
    int a ;
    printf("inserisci numero");
    scanf("%d", &a);
    if(a > 10)
    {
        printf("é maggiore di 10\n ");
    } 
     if(a == 5)
    {
        printf("é uguale a 5\n");
    }
    if(a > 5)
    {
        printf("é maggiore di 5");
    }
    if(a < 5)
    {
        printf("é minore di 5");
    }
}