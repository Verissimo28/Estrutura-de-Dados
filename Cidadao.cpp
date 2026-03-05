#include <stdio.h>

struct Cidadao {
    int id;
    char nome[100];
    int idade;
};

void imprimirCidadao(struct Cidadao c) {
    printf("\n--- Dados do Cidadao ---\n");
    printf("ID: %d\n", c.id);
    printf("Nome: %s\n", c.nome);
    printf("Idade: %d\n", c.idade);
}

int main() {

    struct Cidadao pessoa;  // alocação estática (na stack)

    printf("Digite o ID: ");
    scanf("%d", &pessoa.id);

    printf("Digite o nome: ");
    scanf(" %[^\n]", pessoa.nome);  
    // espaço antes evita problema de buffer

    printf("Digite a idade: ");
    scanf("%d", &pessoa.idade);

    imprimirCidadao(pessoa);

    return 0;
}