#include <cs50.h>
#include <stdio.h>

int main(void)
{

int n;
do
{
  n =  get_int("Height: ");
  
}while(n<=0 || n>8);

  for (int i = 1; i <= n; i++)
  {
    for(int k=n;k!=i;k--)
        {
              printf(" ");
        }
      for (int j = 0; j < i; j++)
      {
                   
          printf("#");
      }
          printf("\n");
  }
}

