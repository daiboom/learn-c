#include <stdio.h>

int main(void) {
  char ch = 'A';
  // wchar_t wch = L'A';
  short sData = 10;
  int nData = 10;
  long lData = 10L;
  long int lnData = 10L;
  long long int llnData = 10LL;

  unsigned char byNewData = 0;
  unsigned short sNewData = 65535U;
  unsigned int uNewData = 1U;
  unsigned long int ulNewData = 1UL;
  unsigned long long int ullnewData = 1ULL;

  printf(sData);
  printf(nData);
  printf(lData);
  printf(lnData);
  printf(llnData);
  printf(byNewData);
  printf(sNewData);
  printf(uNewData);
  printf(ulNewData);
  printf(ullnewData);

  return 0;
}