#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <locale.h>

//variaveis globais
int senha;
float saldo;
int validarSenha;

void imprimirOpcoes()
{
    printf("***********************************\n");
    printf("| Sistema Bancário \n");
    printf("| Digite uma opção para fazer uma operação: \n");
    printf("| 1 - Abrir conta\n");
    printf("| 2 - Depositar dinheiro\n");
    printf("| 3 - Ver Extrato\n");
    printf("| 4 - Transferência\n");
    printf("| 5 - Pagamentos\n");
    printf("| 6 - Saque\n");
    printf("| 7 - Sair\n");
    printf("***********************************\n");
}
void abrirConta()
{
    printf("Abrindo conta....\nInsira sua senha: ");
    scanf(" %d", &senha);
    saldo = 0.0; //saldo inicia com R$ 0
    printf("Conta aberta com sucesso!\n\n");

}
void depositar()  //A senha não é obrigatória
{
    float valor;

    printf("Insira o valor do depósito: R$ ");
    scanf(" %f", &valor);
    saldo += valor; //calcula o valor do saldo + deposito
    printf("\nOperação realizada. Você tem R$ %.2f reais na conta \n\n", saldo);

}
void verExtrato()
{
    printf("Extrato....................R$ %.2f\n\n", saldo);
}
void transferencia()
{
    int tipo;
    char nome[200];
    int cpf;
    int numeroDaConta;
    char conta[200];
    float valorDaTransferencia;

    printf("1 - TED \n");
    printf("2 - DOC \n");
    printf("Qual tipo de transferência deseja fazer?\n");
    scanf(" %d", &tipo);
    printf("Digite sua senha: ");
    scanf(" %d", &validarSenha);
    
    if (senha == validarSenha) //Se a senha estiver correta
    {    
        printf("Digite o primeiro nome do beneficiário:  \n");
        scanf(" %s", &nome);
        printf("Digite CPF ou CNPJ do beneficiário:  \n");
        scanf(" %d", &cpf);
        printf("Digite o número da conta bancária do beneficiário:  \n");
        scanf(" %d", &numeroDaConta);
        printf("Digite o tipo de conta corrente ou poupança [c/p]:  \n");
        scanf(" %s", &conta);
        printf("Valor que deseja transferir: \n");
        scanf(" %f", &valorDaTransferencia);

        if (saldo >= valorDaTransferencia) //Se o valor em conta for igual ou maior que o que esta sendo transferido
        {
            saldo -= valorDaTransferencia;
            printf("Operação realizada! O valor de %.2f foi transferido para %s.\n", valorDaTransferencia, nome);
        }
        else //Se não for
        {
            printf("Saldo insuficiente.\n\n");
        }
    }
    else //Se a senha estiver errada
    {
        printf("Senha incorreta. Operação encerrada! \n\n");
    }
}
void pagamentos()
{
    char codigoDeBarras[200];
    float valorBoleto;
    //Entrada
    printf("Digite o código de barras do boleto: \n");
    scanf(" %s", &codigoDeBarras);
    printf("Digite o valor do boleto: \n");
    scanf(" %f", &valorBoleto);
    printf("Digite sua senha: ");
    scanf(" %d", &validarSenha);
    
    if(senha == validarSenha) //Validação de senha, se estiver correta:
    {
        if(saldo >= valorBoleto) //Verifica se o saldo é maior ou igual ao do boleto
        {
            saldo -= valorBoleto;
            printf("Pagamento de boleto realizado com sucesso! \n\n");
        }
        else //Caso não seja a operação não será realizada
        {
            printf("Saldo insuficiente.\n\n");
        }
    }
    else
    {
        printf("Senha incorreta. Operação cancelada.\n\n");
    }
}

void saque()
{
    float saque;
    printf("Digite o valor que deseja sacar: ");
    scanf(" %f", &saque);

    printf("Digite sua senha: ");
    scanf(" %d", &validarSenha);
    if(senha == validarSenha)
    {
        if (saldo < saque) //Se o valor da conta for insuficiente
        {
            printf("Saldo insuficiente \n");
        }
        else{
            saldo -= saque;
            printf("Operação realizada com sucesso! \n");
            printf("Valor atual: R$ %.2f \n\n", saldo);
        }
    }
    else{
        printf("Senha incorreta. Operação encerrada! \n\n");
    }

}

int main()
{
    setlocale(LC_ALL, "Portuguese");
    int opcao;
    while(true) 
    {
        imprimirOpcoes();
        scanf(" %d", &opcao);
        if (opcao == 1)
        {
            abrirConta();
        }
        else if (opcao == 2)
        {
            depositar();
        }
        else if (opcao == 3)
        {
            verExtrato();
        }
        else if(opcao == 4)
        {
            transferencia();
        }
        else if(opcao == 5)
        {
            pagamentos();
        }
        else if(opcao == 6)
        {
            saque();
        }
        else if(opcao == 7)
        {
            printf("Obrigada por utilizar nosso banco. Até a próxima!\n");
            break; //termina o programa
        }
    }
}

