#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

void cek();

int nim;

void cek(int a) {
  if (a % 2 == 0) {
    printf("NIM anda genap.");
  } else {
    printf("NIM anda ganjil.");
  }
}

main() {
  system("CLS");
  printf("Masukkan NIM anda : ");
  scanf("%d", &nim);
  printf("\n");

  cek(nim);

  getch();
}
