#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int questao1()
{
    int pontuacao = 0;
    printf("\n  Quest�o 1: Qual o animal mais r�pido do planeta?\n");
    printf("(a) Falc�o-peregrino\n");
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
        printf("Resposta incorreta, o  animal mais r�pido do mundo � o falc�o-peregrino.\n");
        pontuacao = 0;
    }
    return pontuacao;
}
int questao2()
{
    int pontuacao = 0;
    printf("\n  Quest�o 2: Qual o menor inseto do mundo?\n");
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
        printf("Resposta incorreta, o menor inseto � o Escaravelho Scydosella musawasensis\n");
        pontuacao = 0;
    }
    return pontuacao;
}
int questao3()
{
    int pontuacao = 0;
    printf("\n  Quest�o 3: O que caracateriza um mam�fero?\n");
    printf("(a) A nutri��o do embri�o � feita por meio do sangue materno\n");
    printf("(b) Membros anteriores curtos e posteriores longos, unhas retr�teis e sola da pata com tecido de amortecimento de impacto\n");
    printf("(c) A presen�a de pelos, gl�ndulas mam�rias, diafragma e dentes diferenciados\n");
    printf("(d) A presen�a de gl�ndulas mam�rias\n");
    printf("(e) Membros posteriores longos e unhas retr�teis\n");

    char resposta3;
    scanf(" %c", &resposta3);
    if (resposta3 == 'c')
    {
        printf("Resposta correta!\n");
        pontuacao = 1;
    }
    else
    {
        printf("Resposta incorreta, a presen�a de pelos, gl�ndulas mam�rias, diafragma e dentes diferenciados s�o caracteristicas de mamiferos \n");
        pontuacao = 0;
    }
    return pontuacao;

}
int questao4()
{
    int pontuacao = 0;
    printf("\n  Questao 4: Qual o nome dado �s partes femininas de uma flor? \n");
    printf("(a) S�pala\n");
    printf("(b) Pedicelo\n");
    printf("(c) Carpelo\n");
    printf("(d) Arthropoda\n");
    printf("(e) Por�feros \n");

    char resposta4;
    scanf(" %c", &resposta4);
    if (resposta4 == 'c')
    {
        printf("Resposta correta!\n");
        pontuacao = 1;
    }
    else
    {
        printf("Resposta incorreta, as partes femininas de uma flor s�o os carpelos\n");
    }
    return pontuacao;

}
int questao5()
{
    int pontuacao = 0;
    printf("\n  Quest�o 5: Samambaias e avencas s�o\n");
    printf("(a) Bri�fitas\n");
    printf("(b) Pterid�fitas\n");
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
        printf("Resposta incorreta, Samambaias e avencas s�o exemplos de pterid�fitas\n");
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
