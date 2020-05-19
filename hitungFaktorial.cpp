#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

int faktorial();

int n, jumlah;

int faktorial(int a) {
  int i, jumlah = 1;

  for (i = 1; i <= a; i++) {
    jumlah *= i;
  }

  return jumlah;
}

main() {
  system("CLS");
  printf("n : ");
  scanf("%d", &n);

  jumlah = faktorial(n);

  printf("%d! = %d", n, jumlah);

  getch();
  return 0;
}
