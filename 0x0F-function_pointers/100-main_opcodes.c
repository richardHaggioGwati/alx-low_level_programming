#include <stdio.h>
#include <stdlib.h>

void print_opcodes(int n_bytes);

int main(int argc, char *argv[]) {
  if (argc != 2) {
    printf("Error\n");
    return 1;
  }

  int n_bytes = atoi(argv[1]);
  if (n_bytes <= 0) {
    printf("Error\n");
    return 2;
  }

  print_opcodes(n_bytes);

  return 0;
}

void print_opcodes(int n_bytes) {
  char *func_start = (char *)&print_opcodes;
  char *func_end = func_start + n_bytes;
  char *p;

  for (p = func_start; p < func_end; p++) {
    printf("%02x ", (unsigned char)*p);
  }

  printf("\n");
}