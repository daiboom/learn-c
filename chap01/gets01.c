#include <stdio.h>
#define MAX_STR_SIZE 32

int main(void) {
  FILE *stream;
  char szName[MAX_STR_SIZE] = {0};
  printf("이름을 입력하세요: ");
  fgets(szName, MAX_STR_SIZE, stdin);

  printf("당신의 이름은 ");
  printf("%s", szName);
  printf("입니다.");

  return 0;
}