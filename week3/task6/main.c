#include <stdio.h>
#include <stdlib.h>

int main() {
  unsigned int n = 0;
  int count = 0;
  printf("Enter an the number: ");
  scanf("%u", &n);

  do {
    n /= 10;
    ++count;
  } while (n != 0);

  printf("Number of digits: %d", count);
}
