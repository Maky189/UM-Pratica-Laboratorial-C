#include <stdio.h>

int main(void)
{
  int n = 10;

  int lista[n];

  for(int i = 0; i < n; i++)
  {
    lista[i] = i *(n - 1);
  }

  for(int i = 0; i < n; i++)
  {
    printf("%d\n", lista[i]);
  }
}
