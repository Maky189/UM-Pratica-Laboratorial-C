#include <stdio.h>
int main(void)
{
  int m, n;
  printf("tamanho m: ");
  scanf("%d", &m);
  printf("tamanho n: ");
  scanf("%d", &n);
  
  int matriz1[m][n];
  int matriz2[m][n];

  //contruir Matriz A
  for(int i = 0; i < m; i++)
  {
    for(int j = 0; j < n; j++)
    {
      printf("matriz A %d|%d: ", (i + 1), (j + 1));
      scanf("%d", &matriz1[i][j]);
    }
  }

  //contruir Matriz B
  for(int i = 0; i < m; i++)
  {
    for(int j = 0; j < n; j++)
    {
      printf("matriz B %d|%d: ", (i + 1), (j + 1));
      scanf("%d", &matriz2[i][j]);
    }
  }

  //Construir matriz C
  int matriz3[m][n];
  for(int i = 0; i < m; i++)
  {
    for(int j = 0; j < n; j++)
    {
      matriz3[i][j] = matriz1[i][j] + matriz2[i][j];
    }
  }

  //printar nova matriz
  for(int i = 0; i < m; i++)
  {
    for(int j = 0; j < n; j++)
    {
      printf("|%d|", matriz3[i][j]);
    }
    printf("\n");
  }


}
