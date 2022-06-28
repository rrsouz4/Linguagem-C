#include <stdio.h>
#include <stdlib.h>

void limpar_entrada(){
    char c;
    while ((c = getchar()) != '\n' && c != EOF) {}
}

int main(){

    double n1 = 0, n2 = 0, total = 0;

    printf("Digite a primeira nota: ");
    scanf("%lf", &n1);

    printf("Digite a segunda nota: ");
    limpar_entrada();
    scanf("%lf", &n2);

    total = (n1+n2);

    if (total > 60.0){

    printf("\nNOTA FINAL = %.1lf",total);

    }else{

        printf("\nNOTA FINAL = %.1lf",total);
        printf("\nREPROVADO!\n");

    }

    return 0;
}
