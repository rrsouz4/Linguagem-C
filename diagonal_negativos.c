#include <stdio.h>
#include <string.h>

void limpar_entrada() {
char c;
while ((c = getchar()) != '\n' && c != EOF) {}
}

/*Programa encontra e imprimi os números da diagonal principal da matriz
e depois identifica e imprimi a quantidade de números negativos inseridos na matriz inteira*/

int main()
{

    int N;

    printf("Qual a ordem da Matriz? ");
    scanf("%d", &N);
    limpar_entrada();

    int mat[N][N];

    for (int i = 0; i < N; i++){
        for (int j = 0; j < N; j++){
            printf("Elemento [%d,%d]: ",i,j);
            scanf("%d",&mat[i][j]);
            //printf("\n");
        }
    }

    printf("DIAGONAL PRINCIPAL: \n");
    for (int i = 0; i < N; i++){
        for (int j = i; j == i; j++){
            printf("%d ",mat[i][j]);
        }
    }

    int contNegativo = 0;

    printf("\nQUANTIDADE DE NEGATIVOS: ");
    for (int i = 0; i < N; i++){
        for (int j = 0; j < N; j++){
            if (mat[i][j] < 0){
                contNegativo++;
            }
        }
    }
    printf("%d",contNegativo);


    return 0;
}
