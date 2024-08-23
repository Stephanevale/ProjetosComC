#include <stdio.h>
#include <stdlib.h>

#define PEDRA 1
#define PAPEL 2
#define TESOURA 3

void imprimirJogada(char* nome, int jogada) {
    switch(jogada){
    case PEDRA:
        printf("%s escolheu PEDRA\n", nome);
        break;
    case PAPEL:
        printf("%s escolheu PAPEL\n", nome);
        break;
    case TESOURA:
        printf("%s escolheu TESOURA\n", nome);
        break;
    default:
        printf("Opa, escolha inv�lida. Tente novamente...\n");
        exit(0);
    }
}

void verificar(int jogada, int jogadaCPU){
    if (jogada == jogadaCPU) {
        printf("Deu empate.\n");
    }
    else if (
        (jogada == PEDRA && jogadaCPU == TESOURA) ||
        (jogada == PAPEL && jogadaCPU == PEDRA) ||
        (jogada == TESOURA && jogadaCPU == PAPEL)
        ) {
        printf("Jogador ganhou!\n");
    }
    else {
        printf("CPU ganhou...\n");
    }
}

int main()
{
    int jogada, jogadaCPU;
    printf("PEDRA-PAPEL-TESOURA\n");
    printf("Digite 1-Pedra, 2-Papel, 3-tesoura:\n");
    scanf(" %d", &jogada);

    imprimirJogada("Jogador", jogada);

    srand(time(NULL));
    jogadaCPU = rand() % 3 + 1; //Filtrar em n�mero entre 1-3
    imprimirJogada("CPU", jogadaCPU);

    verificar(jogada, jogadaCPU);
}
