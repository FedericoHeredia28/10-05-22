#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
  int n = atoi(argv[1]);
 for (int i = 2; i < n - 1; i++) {
   if (n % i == 0) {
     printf("No es primo");
     return 0;
   }
 }
printf("primo");
  return 0;
}
