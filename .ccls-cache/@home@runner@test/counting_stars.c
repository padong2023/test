#include <stdio.h>

main() {
  int i, j, rows;

  printf("몇 개의 줄을 만들까요?: ");
  scanf("%d", &rows);

  for (i = 1; i <= rows; i++) {
    for (j = i; j < rows; j++) {
      printf(" ");
    }

    for (j = 1; j <= (2 * i - 1); j++) {
      printf("*");
    }
    printf("\n");
  }
}