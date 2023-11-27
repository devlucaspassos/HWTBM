//C�digo desenvolvido por Lucas Passos na disciplina de t�cnicas de programa��o I
//Github -> https://github.com/devlucaspassos


#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

// Estrutura para armazenar perguntas e respostas
struct Pergunta {
    char pergunta[500];
    char opcaoA[100];
    char opcaoB[100];
    char opcaoC[100];
    char opcaoD[100];
    char respostaCorreta;
};

// Fun��o para exibir uma pergunta e suas op��es
int exibirPergunta(struct Pergunta pergunta) {
    printf("%s\n", pergunta.pergunta);
    printf("A) %s\n", pergunta.opcaoA);
    printf("B) %s\n", pergunta.opcaoB);
    printf("C) %s\n", pergunta.opcaoC);
    printf("D) %s\n", pergunta.opcaoD);

    char respostaJogador;
    printf("\n Escolha a op��o correta (A, B, C ou D): ");
    scanf(" %c", &respostaJogador);

    if (respostaJogador == pergunta.respostaCorreta) {
        printf("\n Resposta correta! Vamos para a pr�xima pergunta.\n\n");
        return 1; // Retorna 1 se a resposta estiver correta
    } else {
        printf("\n Resposta incorreta! Que pena, voc� perdeu. \n");
        exit(0); // Termina o programa em caso de resposta incorreta
    }
}

int main() {
    setlocale(LC_ALL, "Portuguese");

    printf("Bem-vindo ao jogo SHOW DO MILH�O!\n\n");

    struct Pergunta perguntas[10]; // Array para armazenar as perguntas

    // Inicializa��o das perguntas
    // Pergunta 1
    sprintf(perguntas[0].pergunta, "%s", "Por que a linguagem C � classificada como de m�dio n�vel?\n");
    sprintf(perguntas[0].opcaoA, "%s", "Porque combina alto n�vel com baixo n�vel.");
    sprintf(perguntas[0].opcaoB, "%s", "C � considerada de alto n�vel, excluindo caracter�sticas de baixo n�vel.");
    sprintf(perguntas[0].opcaoC, "%s", "C � puramente de baixo n�vel, sem recursos de alto n�vel.");
    sprintf(perguntas[0].opcaoD, "%s", "C � classificada como exclusivamente de alto n�vel, sem combinar caracter�sticas.");
    perguntas[0].respostaCorreta = 'A';

    // Pergunta 2
    sprintf(perguntas[1].pergunta, "%s", "Qual � o conceito de ponteiros em C e suas diferen�as em rela��o �s vari�veis comuns?\n");
    sprintf(perguntas[1].opcaoA, "%s", "Armazenam endere�os, diferem de vari�veis.");
    sprintf(perguntas[1].opcaoB, "%s", "Ponteiros em C armazenam diretamente valores, n�o endere�os.");
    sprintf(perguntas[1].opcaoC, "%s", "Ponteiros e vari�veis comuns em C s�o id�nticos.");
    sprintf(perguntas[1].opcaoD, "%s", "A linguagem C n�o suporta ponteiros; s� vari�veis comuns.");
    perguntas[1].respostaCorreta = 'A';

    // Pergunta 3
    sprintf(perguntas[2].pergunta, "%s", "Qual � a fun��o dos arquivos de cabe�alho em C?\n");
    sprintf(perguntas[2].opcaoA, "%s", "Cont�m declara��es, essenciais para o compilador.");
    sprintf(perguntas[2].opcaoB, "%s", "Arquivos .h em C s�o usados apenas para documenta��o.");
    sprintf(perguntas[2].opcaoC, "%s", "Arquivos .h armazenam apenas vari�veis globais.");
    sprintf(perguntas[2].opcaoD, "%s", "Em C, .h s�o exclusivos para fun��es, n�o vari�veis.");
    perguntas[2].respostaCorreta = 'A';

    // Pergunta 4
    sprintf(perguntas[3].pergunta, "%s", "Como a linguagem C trata a entrada e sa�da de dados, e quais s�o as fun��es principais utilizadas?\n");
    sprintf(perguntas[3].opcaoA, "%s", "Biblioteca padr�o; printf e scanf essenciais.");
    sprintf(perguntas[3].opcaoB, "%s", "C n�o oferece suporte a I/O; programadores lidam manualmente.");
    sprintf(perguntas[3].opcaoC, "%s", "I/O em C � gerenciado por bibliotecas externas.");
    sprintf(perguntas[3].opcaoD, "%s", "I/O em C � tratado pelo compilador; printf e scanf s�o opcionais.");
    perguntas[3].respostaCorreta = 'A';

    // Pergunta 5
    sprintf(perguntas[4].pergunta, "%s", "Quais s�o as principais diferen�as entre as fun��es printf e scanf em C?\n");
    sprintf(perguntas[4].opcaoA, "%s", "printf imprime, scanf recebe; ambas stdio.h.");
    sprintf(perguntas[4].opcaoB, "%s", "Em C, printf e scanf s�o intercambi�veis, sem distin��o.");
    sprintf(perguntas[4].opcaoC, "%s", "C n�o possui printf e scanf; programadores criam fun��es pr�prias.");
    sprintf(perguntas[4].opcaoD, "%s", "Ambas s�o exclusivamente usadas para sa�da de dados em C.");
    perguntas[4].respostaCorreta = 'A';

    // Pergunta 6
    sprintf(perguntas[5].pergunta, "%s", "Como o escopo em C influencia a visibilidade das vari�veis?\n");
    sprintf(perguntas[5].opcaoA, "%s", "Local em fun��o; global em todo programa.");
    sprintf(perguntas[5].opcaoB, "%s", "Em C, o escopo n�o afeta a visibilidade das vari�veis.");
    sprintf(perguntas[5].opcaoC, "%s", "O escopo em C afeta apenas vari�veis globais.");
    sprintf(perguntas[5].opcaoD, "%s", "Em C, vari�veis locais e globais t�m o mesmo escopo.");
    perguntas[5].respostaCorreta = 'A';

    // Pergunta 7
    sprintf(perguntas[6].pergunta, "%s", "O que s�o structs em C e como elas organizam dados?\n");
    sprintf(perguntas[6].opcaoA, "%s", "Agrupam dados sob nome �nico.");
    sprintf(perguntas[6].opcaoB, "%s", "Structs em C desorganizam dados, dificultando o acesso.");
    sprintf(perguntas[6].opcaoC, "%s", "Structs em C s�o sin�nimos de vari�veis individuais.");
    sprintf(perguntas[6].opcaoD, "%s", "Structs em C armazenam apenas um tipo de dado.");
    perguntas[6].respostaCorreta = 'A';

    // Pergunta 8
    sprintf(perguntas[7].pergunta, "%s", "Como a linguagem C lida com a divis�o por zero, especialmente ao utilizar o operador de divis�o /?\n");
    sprintf(perguntas[7].opcaoA, "%s", "Indefinido; verificar evita erros.");
    sprintf(perguntas[7].opcaoB, "%s", "Em C, a divis�o por zero � tratada automaticamente.");
    sprintf(perguntas[7].opcaoC, "%s", "C retorna um valor especial ao dividir por zero.");
    sprintf(perguntas[7].opcaoD, "%s", "Em C, divis�o por zero n�o apresenta problemas.");
    perguntas[7].respostaCorreta = 'A';

    // Pergunta 9
    sprintf(perguntas[8].pergunta, "%s", "Explique o conceito de ponteiros para fun��es em C e sua utilidade?\n");
    sprintf(perguntas[8].opcaoA, "%s", "Armazenam endere�os, �teis para din�mica.");
    sprintf(perguntas[8].opcaoB, "%s", "Ponteiros para fun��es armazenam c�digo de m�quina, n�o endere�os.");
    sprintf(perguntas[8].opcaoC, "%s", "Ponteiros para fun��es em C s� armazenam valores de retorno.");
    sprintf(perguntas[8].opcaoD, "%s", "Em C, ponteiros para fun��es n�o armazenam endere�os.");
    perguntas[8].respostaCorreta = 'A';

    // Pergunta 10
    sprintf(perguntas[9].pergunta, "%s", "Qual a diferen�a entre vari�veis locais e globais em C?\n");
    sprintf(perguntas[9].opcaoA, "%s", "Local na fun��o; global em todo programa.");
    sprintf(perguntas[9].opcaoB, "%s", "Em C, vari�veis locais s�o acess�veis em todo o programa.");
    sprintf(perguntas[9].opcaoC, "%s", "Em C, vari�veis locais e globais s�o intercambi�veis.");
    sprintf(perguntas[9].opcaoD, "%s", "Vari�veis locais em C t�m escopo global.");
    perguntas[9].respostaCorreta = 'A';

    int pontuacao = 0;

    // Loop para exibir cada pergunta
    for (int i = 0; i < 10; i++) {
        pontuacao += exibirPergunta(perguntas[i]);
    }

    printf("Parab�ns, voc� ganhou uma garrafa de CACHA�A DOURADINHA! :)\n");

    return 0;
}
