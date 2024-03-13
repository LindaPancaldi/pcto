#include <stdio.h>

int main()
{
   int a[4]= {2, 8, 6, 4};
   int comparatore=0;
   int numero_stampa=0;
   int posizione=0;
   while( numero_stampa <= 3)
{
  while(posizione <= 3)
  {
   if(a[posizione] == comparatore)
   {
      printf("%d \n", comparatore);
      posizione++;
      numero_stampa++;
   }
   else
   {
      posizione++;
   }
  }
 posizione = 0;
  comparatore++;
}

}
