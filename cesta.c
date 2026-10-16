
#include <stdio.h>

int main() {
    char nome[50];
    float anterior, atual;
    int i;

    printf("=== ANALISE DE PRECOS DA CESTA BASICA ===\n");

    for (i = 1; i <= 3; i++) {
        printf("\nProduto %d\n", i);

        printf("Digite o nome do produto: ");
        scanf("%49s", nome);

        printf("Preco do mes anterior: R$ ");
        scanf("%f", &anterior);

        printf("Preco do mes atual: R$ ");
        scanf("%f", &atual);

        if (atual > anterior) {
            printf("Resultado: %s teve aumento de preco.\n", nome);
        } else if (atual < anterior) {
            printf("Resultado: %s teve reducao de preco.\n", nome);
        } else {
            printf("Resultado: %s manteve o mesmo preco.\n", nome);
        }
    }

    printf("\nAnalise finalizada!\n");

    return 0;
}
