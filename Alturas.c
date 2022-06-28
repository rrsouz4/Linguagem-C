#include <stdio.h>
#include <string.h>

void limpar_entrada() {
char c;
while ((c = getchar()) != '\n' && c != EOF) {}
}

int main(){

    int N;

    printf("Quantas pessoas serao digitadas? ");
    scanf("%d", &N);

    char nome[N][50];
    int idade[N];
    double altura[N];

    int cont = 0;
    double acumulaAltura = 0;

    for (int i = 0; i <= N; i++){

        cont++;

        printf("Dados da %da pessoa: \n",i+1);

        printf("Nome: ");
        limpar_entrada();
        gets(nome[i]);

        printf("Idade: ");
        scanf("%d", &idade[i]);

        printf("Altura: ");
        scanf("%lf", &altura[i]);

        acumulaAltura = acumulaAltura + altura[i];

    }

    double mediaAltura = acumulaAltura/cont;

    printf("Altura media: %.2lf", mediaAltura);

    printf("\nPessoas com menos de 16 anos: ");
    cont = 0;
    for (int i = 1; i <= N; i++){
        if (idade[i] < 16){
            cont++;
        }
    }

    double totalMenor = (cont * 100) / N;
    printf("%.1lf %%\n",totalMenor);

    for (int i = 0; i <= N; i++){
        if (idade[i] < 16){
            printf("%s\n",nome[i]);
        }
    }

    return 0;
}
