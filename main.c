#include <stdio.h>

int main(int argc, char* argv[]) {
  unsigned int x = 1;
  int i;

  for(i=0; x != 0 ; i++)
  {
    printf("%d: %u ", i, x);
    printf("\n");
    x = x<<1;
  }
  return 0;
}