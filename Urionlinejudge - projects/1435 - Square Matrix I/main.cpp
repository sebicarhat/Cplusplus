#include <stdlib.h>
#include <stdio.h>
#include <math.h>

void imprime (int num){
    int i = 1;
    int n = 1;
    int j;
    int k = 0;
    int valor = num;
    int m[100][100];

      while (n <= floor((num+1)/2))
      {
        for (j = k; j<valor; j++)
        {
            m[j][k] = n;
            m[k][j] = n;
            m[valor-1][j] = n;
            m[j][valor-1] = n;


        }
        valor--;
        k++;
        n++;
      }

      for (i=0; i<num; i++)
        for (j=0; j<num; j++)
        {
          if (j==0 && i!=0)
            printf("\n");


          if (m[i][j] >99)
            if (j!=num-1)
                  printf("%3d ", m[i][j]);
              else
                  printf("%3d", m[i][j]);
          else
            if (m[i][j] <10)
              if (j!=num-1)
                  printf("  %d ", m[i][j]);
              else
                  printf("  %d", m[i][j]);
          else
            if (j!=num-1)
                printf(" %2d ", m[i][j]);
            else
                printf(" %2d", m[i][j]);
        }
    printf("\n");
}



int main () {
    int N[100];
    int res = 0;
    int j, i=0;
    while (res == 0){
        scanf("%d", &N[i]);
        if (N[i]>0)
            i++;
        else
            res = 1;
    }

    for (j=0; j<i; j++){
        imprime(N[j]);
        if (j < i-1)
            printf("\n");
    }


printf("\n");


    return 0;
}
