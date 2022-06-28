#include <stdio.h>
#include <string.h>

void limpar_entrada(){
    char c;
    while ((c = getchar()) != '\n' && c != EOF) {}
}

int main(){

    int N, i, j;

    printf("Voce deseja a tabuada de qual numero? ");
    scanf("%d", &N);

    j = 0;
    printf("\nA tabuada e: \n");
    limpar_entrada();
    for (i = 0; i <= 10; i++){
        j = N * i;
        printf("%d x %d = %d",N,i,j);
        printf("\n");
    }

    return 0;
}
