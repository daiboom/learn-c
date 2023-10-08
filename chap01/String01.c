#include <stdio.h>

int main(void) {
  char ch1 = 'A', ch2 = 'B', ch = 'C';

  char szData[4] = {'A', 'B', 'C'};
  char szNewData[4] = {"ABC"};

  printf("%D\n", ch1);
  printf("%D\n", ch2);
  printf("%D\n", ch);
  printf("%s\n", szData);
  printf("%s\n", szNewData);
  return 0;
}