#include "stdio.h"

int main(int argc, char const *argv[]) {
  //char input_string[105];
  //char a, b, c;
  //scanf("[^\n]", input_string);
  //printf("%d\n", input_string);

  //scanf("%c %c %c\n", &a, &b, &c);
  //printf("%c%c%c\n", a, b, c);
  int a, b;
  while (scanf("%d  %d\n", &a, &b) != EOF) {
    printf("%d\n", a + b);
  }
  return 0;
}
