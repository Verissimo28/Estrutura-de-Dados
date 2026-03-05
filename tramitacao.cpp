#include <stdio.h>

struct Processo {
    int numeroProtocolo;
    int status;
};

void atualizarStatus(struct Processo *p, int novoStatus) {
    p->status = novoStatus;
}

void imprimirStatus(int status) {
    if (status == 0)
        printf("Em analise\n");
    else if (status == 1)
        printf("Deferido\n");
    else if (status == 2)
        printf("Indeferido\n");
    else
        printf("Status invalido\n");
}

int main() {
    struct Processo processo1;
    processo1.numeroProtocolo = 1234;
    processo1.status = 0;

    printf("Status inicial: ");
    imprimirStatus(processo1.status);

    atualizarStatus(&processo1, 1);

    printf("Status apos atualização: ");
    imprimirStatus(processo1.status);

    return 0;
}