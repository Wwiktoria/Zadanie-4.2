#include <stdio.h>

int main(void) {
  double kwota;
  double lata = 0;
  double kwota1;
  printf("Podaj kwotę: ");
  scanf("%lf", &kwota);
  double lokata = 0;
  double roznica;
  kwota1 = kwota;
  printf("kwota %lf\n",kwota);
  printf("kwota1 %lf\n",kwota1);
  while (lokata <= kwota1) {
    roznica=kwota*0.06;
    lokata = lokata + roznica;
    printf("lokata %lf\n",lokata);
    kwota = kwota + roznica;
    printf("kwota %lf \n", kwota);
    lata = lata + 1;
    printf("%lf lata\n",lata);
  }
  printf("Musisz utrzymywać lokatę %lf lat", lata);
  return 0;
}
