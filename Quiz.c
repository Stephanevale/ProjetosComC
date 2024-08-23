#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int questao1()
{
    int pontuacao = 0;
    printf("\n  Questão 1: Qual o animal mais rápido do planeta?\n");
    printf("(a) Falcâo-peregrino\n");
    printf("(b) Guepardo\n");
    printf("(c) Peixe-vela\n");
    printf("(d) Mutuca\n");
    printf("(e) Zebra-Natural\n");

    char resposta1;
    scanf(" %c", &resposta1);
    if (resposta1 == 'a')
    {
        printf("Resposta correta!\n");
        pontuacao = 1;
    }
    else
    {
        printf("Resposta incorreta, o  animal mais rápido do mundo é o falcão-peregrino.\n");
        pontuacao = 0;
    }
    return pontuacao;
}
int questao2()
{
    int pontuacao = 0;
    printf("\n  Questão 2: Qual o menor inseto do mundo?\n");
    printf("(a) Escaravelho Scydosella musawasensis\n");
    printf("(b) Wasmannia auropunctata\n");
    printf("(c) Placozoa\n");
    printf("(d) Coccinellidae\n");
    printf("(e) Culicidae\n");


    char resposta2;
    scanf(" %c", &resposta2);
    if (resposta2 == 'a')
    {
        printf("Resposta correta!\n");
        pontuacao = 1;
    }
    else
    {
        printf("Resposta incorreta, o menor inseto é o Escaravelho Scydosella musawasensis\n");
        pontuacao = 0;
    }
    return pontuacao;
}
int questao3()
{
    int pontuacao = 0;
    printf("\n  Questão 3: O que caracateriza um mamífero?\n");
    printf("(a) A nutrição do embrião é feita por meio do sangue materno\n");
    printf("(b) Membros anteriores curtos e posteriores longos, unhas retráteis e sola da pata com tecido de amortecimento de impacto\n");
    printf("(c) A presença de pelos, glândulas mamárias, diafragma e dentes diferenciados\n");
    printf("(d) A presença de glândulas mamárias\n");
    printf("(e) Membros posteriores longos e unhas retráteis\n");

    char resposta3;
    scanf(" %c", &resposta3);
    if (resposta3 == 'c')
    {
        printf("Resposta correta!\n");
        pontuacao = 1;
    }
    else
    {
        printf("Resposta incorreta, a presença de pelos, glândulas mamárias, diafragma e dentes diferenciados são caracteristicas de mamiferos \n");
        pontuacao = 0;
    }
    return pontuacao;

}
int questao4()
{
    int pontuacao = 0;
    printf("\n  Questao 4: Qual o nome dado às partes femininas de uma flor? \n");
    printf("(a) Sépala\n");
    printf("(b) Pedicelo\n");
    printf("(c) Carpelo\n");
    printf("(d) Arthropoda\n");
    printf("(e) Poríferos \n");

    char resposta4;
    scanf(" %c", &resposta4);
    if (resposta4 == 'c')
    {
        printf("Resposta correta!\n");
        pontuacao = 1;
    }
    else
    {
        printf("Resposta incorreta, as partes femininas de uma flor são os carpelos\n");
    }
    return pontuacao;

}
int questao5()
{
    int pontuacao = 0;
    printf("\n  Questão 5: Samambaias e avencas são\n");
    printf("(a) Briófitas\n");
    printf("(b) Pteridófitas\n");
    printf("(c) Angiospermas\n");
    printf("(d) Magnoliopsida\n");
    printf("(e) Poaceae\n");


    char resposta5;
    scanf(" %c", &resposta5);
    if (resposta5 == 'b')
    {
        printf("Resposta correta!\n");
        pontuacao = 1;
    }
    else
    {
        printf("Resposta incorreta, Samambaias e avencas são exemplos de pteridófitas\n");
        pontuacao = 0;
    }
    return pontuacao;
}
int main()
{
    setlocale(LC_ALL, "Portuguese");
    int pontuacao = 0;
    printf("Bem vindo ao quiz de biologia!\n");
    pontuacao += questao1();
    pontuacao += questao2();
    pontuacao += questao3();
    pontuacao += questao4();
    pontuacao += questao5();
    printf("Pontuacao final: %d de 5 perguntas corretas. \n", pontuacao);
}
