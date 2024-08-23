#include <stdio.h>
#include <stdlib.h>

void mostrarOpcoes()
{
    printf("    ****Programa de encomendas - Fábrica de Docinhos****\n");
    printf("");
    printf("    ---------------------------------- \n");
    printf("    ----Preco Unitarios dos doces---- \n");
    printf("    ---------------------------------- \n");
    printf("    ***-Brigadeiro    R$: 0,50 ***\n");
    printf("    ---------------------------------- \n");
    printf("    ***-Branquinho    R$: 0,50 ***\n");
    printf("    ---------------------------------- \n");
    printf("    ***-Dedo de Moça  R$: 0,75 ***\n");
    printf("    ---------------------------------- \n");
    printf("    ***Cajuzinho     R$: 1,00 ***\n");
    printf("  ****************************************************** \n");

}
int fazerPedido(char * opcao)
{
    int quantidade;
    printf("    Informe a quantidade de %s: ", opcao);
    scanf("%d", &quantidade);
    return quantidade;
}
float calcularPedido(int brigadeiro, int branquinho, int dedoDeMoca, int cajuzinho)
{
    float total = brigadeiro*0.50+branquinho*0.50+dedoDeMoca*0.75+cajuzinho*1.00;
    return total;
}
void mostrarResultados(float valorTotal) {
    printf("\n Valor total da encomenda ficará no valor de: R$ %.2f\n", valorTotal);
}
int  main()
{
    float brigadeiro, branquinho, dedoDeMoca, cajuzinho;
    float total;

    mostrarOpcoes();
    brigadeiro = fazerPedido("brigadeiro");
    branquinho = fazerPedido("branquinho");
    dedoDeMoca = fazerPedido("dedo de Moça");
    cajuzinho = fazerPedido("cajuzinho");
    total = calcularPedido(brigadeiro,branquinho,dedoDeMoca,cajuzinho);
    mostrarResultados(total);
}

