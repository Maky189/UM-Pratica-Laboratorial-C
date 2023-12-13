#include <stdio.h>

int media(int sequencia[15]);

int main(void)
{
  int sequencia[15];

  for(int i = 0; i < 15; i++)
  {
    printf("nota: \n");
    scanf("%d", &sequencia[i]);
    printf("\n");
  }

  int m = media(sequencia);
  for(int i = 0; i < 15; i++)
  {
    if(sequencia[i] >= m)
    {
      printf("aluno %d tem nota maior que a media\n", (i + 1));
    }
    else
    {
      printf("aluno %d tem nota menor que a media\n", (i + 1));
    }
  }
}

int media(int sequencia[15])
{
  int soma = 0;
  for(int i = 0; i < 15; i++)
  {
    soma = soma + sequencia[i];
  }
  return (soma / 15);
}
