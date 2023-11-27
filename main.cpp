
#include <stdio.h>
#include <stdlib.h> // Para a função exit()
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

// Função para exibir uma pergunta e suas opções
int exibirPergunta(struct Pergunta pergunta) {
    printf("%s\n", pergunta.pergunta);
    printf("A) %s\n", pergunta.opcaoA);
    printf("B) %s\n", pergunta.opcaoB);
    printf("C) %s\n", pergunta.opcaoC);
    printf("D) %s\n", pergunta.opcaoD);

    char respostaJogador;
    printf("Escolha a opção correta (A, B, C ou D): ");
    scanf(" %c", &respostaJogador);

    if (respostaJogador == pergunta.respostaCorreta) {
        printf("Resposta correta, aí sim meu patrão!\n\n");
        return 1; // Retorna 1 se a resposta estiver correta
    } else {
        printf("Resposta incorreta. \n");
        exit(0); // Termina o programa em caso de resposta incorreta
    }
}

int main() {

    setlocale(LC_ALL, "Portuguese"); //Evitar problemas de exibição de alguns caracteres

    printf("Bem vindo ao jogo SHOW DO MILH�O\n\n");

    struct Pergunta perguntas[10]; // Array para armazenar as perguntas

    // Inicializa��o das perguntas
    // Pergunta 1
    sprintf(perguntas[0].pergunta, "%s", "Por que a linguagem C � classificada como de m�dio n�vel?\n\n");
    sprintf(perguntas[0].opcaoA, "%s", "C � considerada de m�dio n�vel por combinar caracter�sticas de linguagens de alto n�vel, como abstra��o de dados, com recursos de baixo n�vel, como manipula��o direta de mem�ria.\n");
    sprintf(perguntas[0].opcaoB, "%s", "C � classificada erroneamente como exclusivamente de baixo n�vel, sem recursos de abstra��o de dados.");
    sprintf(perguntas[0].opcaoC, "%s", "A classifica��o como de m�dio n�vel para a linguagem C se deve ao fato de incorporar apenas caracter�sticas de linguagens de alto n�vel, sem elementos de baixo n�vel.");
    sprintf(perguntas[0].opcaoD, "%s", "A classifica��o de m�dio n�vel para a linguagem C � equivocada, pois sugere ser exclusivamente de alto n�vel, sem manipula��o direta de mem�ria.");
    perguntas[0].respostaCorreta = 'A';

    // Continua��o das perguntas
    // Pergunta 2
    sprintf(perguntas[1].pergunta, "%s", "Explique o conceito de ponteiros em C e suas diferen�as em rela��o �s vari�veis comuns.");
    sprintf(perguntas[1].opcaoA, "%s", "Ponteiros em C armazenam endere�os de mem�ria, diferindo das vari�veis comuns que armazenam valores diretos.");
    sprintf(perguntas[1].opcaoB, "%s", "Ponteiros em C s�o erroneamente utilizados apenas para armazenar valores diretos, sem referenciar endere�os de mem�ria.");
    sprintf(perguntas[1].opcaoC, "%s", "Em C, ponteiros e vari�veis comuns s�o id�nticos, ambos armazenando valores diretos, sem distin��o entre manipula��o direta de mem�ria e valores.");
    sprintf(perguntas[1].opcaoD, "%s", "A afirma��o de que a linguagem C n�o possui o conceito de ponteiros � incorreta; ponteiros s�o essenciais para armazenar endere�os de mem�ria.");
    perguntas[1].respostaCorreta = 'A';

    // Pergunta 3
    sprintf(perguntas[2].pergunta, "%s", "Qual a diferen�a entre vari�veis locais e globais em C?");
    sprintf(perguntas[2].opcaoA, "%s", "Vari�veis locais t�m escopo na fun��o; globais s�o vis�veis em todo o programa, diferindo em escopo e tempo de vida.");
    sprintf(perguntas[2].opcaoB, "%s", "Vari�veis locais s�o acess�veis em todo o programa; globais t�m escopo restrito � fun��o.");
    sprintf(perguntas[2].opcaoC, "%s", "Em C, locais e globais s�o intercambi�veis, sem diferen�a em escopo ou visibilidade.");
    sprintf(perguntas[2].opcaoD, "%s", "Vari�veis locais t�m escopo global; globais s�o limitadas � fun��o, diferindo em escopo e tempo de vida.");
    perguntas[2].respostaCorreta = 'A';

    // Pergunta 4
    sprintf(perguntas[3].pergunta, "%s", "Qual � a fun��o dos arquivos de cabe�alho em C?");
    sprintf(perguntas[3].opcaoA, "%s", "Arquivos de cabe�alho em C (com extens�o .h) cont�m declara��es de fun��es e informa��es necess�rias para o compilador, sendo inclusos nos programas para fornecer informa��es sobre as fun��es utilizadas.");
    sprintf(perguntas[3].opcaoB, "%s", "Arquivos de cabe�alho em C servem erroneamente apenas como documenta��o opcional, sem declara��es de fun��es ou informa��es �teis para o compilador.");
    sprintf(perguntas[3].opcaoC, "%s", "Os arquivos de cabe�alho em C n�o t�m rela��o com vari�veis globais e s�o erroneamente utilizados exclusivamente para armazen�-las.");
    sprintf(perguntas[3].opcaoD, "%s", "A afirma��o de que os arquivos de cabe�alho (.h) em C s�o destinados apenas a declara��es de vari�veis locais � incorreta.");
    perguntas[3].respostaCorreta = 'A';

    // Pergunta 5
    sprintf(perguntas[4].pergunta, "%s", "Como a linguagem C trata a entrada e sa�da de dados, e quais s�o as fun��es principais utilizadas?");
    sprintf(perguntas[4].opcaoA, "%s", "Em C, a entrada e sa�da s�o tratadas pela biblioteca padr�o, com fun��es essenciais como printf para imprimir dados e scanf para receber dados do usu�rio.");
    sprintf(perguntas[4].opcaoB, "%s", "A afirma��o de que a linguagem C n�o oferece suporte para entrada e sa�da de dados � incorreta.");
    sprintf(perguntas[4].opcaoC, "%s", "A afirma��o de que a entrada e sa�da em C s�o tratadas por bibliotecas externas de terceiros � incorreta; � a biblioteca padr�o que as gerencia.");
    sprintf(perguntas[4].opcaoD, "%s", "A afirma��o de que as opera��es de entrada e sa�da em C s�o gerenciadas diretamente pelo compilador, sem a necessidade de fun��es espec�ficas, � incorreta.");
    perguntas[4].respostaCorreta = 'A';

    // Pergunta 6
    sprintf(perguntas[5].pergunta, "%s", "Explique o conceito de ponteiros para fun��es em C e sua utilidade");
    sprintf(perguntas[5].opcaoA, "%s", "Ponteiros para fun��es em C armazenam endere�os de fun��es, �teis para passar fun��es como argumentos ou estrat�gias din�micas de chamada.");
    sprintf(perguntas[5].opcaoB, "%s", "Ponteiros para fun��es em C armazenam c�digo de m�quina, simplificando estrat�gias din�micas de chamada.");
    sprintf(perguntas[5].opcaoC, "%s", "Em C, ponteiros para fun��es armazenam valores de retorno, incapazes de passar fun��es como argumentos.");
    sprintf(perguntas[5].opcaoD, "%s", "Ponteiros para fun��es em C armazenam valores de retorno, ineficazes para estrat�gias din�micas.");
    perguntas[5].respostaCorreta = 'A';

    // Pergunta 7
    sprintf(perguntas[6].pergunta, "%s", "Quais s�o as principais diferen�as entre as fun��es printf e scanf em C?");
    sprintf(perguntas[6].opcaoA, "%s", "printf � usada para imprimir dados na tela, enquanto scanf � utilizada para receber dados de entrada do usu�rio, ambas pertencentes � biblioteca stdio.h.");
    sprintf(perguntas[6].opcaoB, "%s", "A afirma��o de que printf e scanf em C s�o intercambi�veis, ambos usados para imprimir dados na tela, � incorreta.");
    sprintf(perguntas[6].opcaoC, "%s", "A afirma��o de que a linguagem C n�o possui as fun��es printf e scanf � incorreta.");
    sprintf(perguntas[6].opcaoD, "%s", " A afirma��o de que tanto printf quanto scanf em C s�o exclusivamente utilizadas para opera��es de entrada de dados � incorreta.");
    perguntas[6].respostaCorreta = 'A';

    // Pergunta 8
    sprintf(perguntas[7].pergunta, "%s", "Como o escopo em C influencia a visibilidade das vari�veis?");
    sprintf(perguntas[7].opcaoA, "%s", "O escopo em C determina a regi�o onde uma vari�vel � v�lida. Vari�veis locais t�m escopo limitado � fun��o em que s�o declaradas, enquanto vari�veis globais s�o vis�veis em todo o programa.");
    sprintf(perguntas[7].opcaoB, "%s", "A afirma��o de que em C o escopo n�o tem impacto na visibilidade das vari�veis � incorreta.");
    sprintf(perguntas[7].opcaoC, "%s", "A afirma��o de que o escopo em C afeta apenas vari�veis globais, limitando sua visibilidade � fun��o em que s�o declaradas, � incorreta.");
    sprintf(perguntas[7].opcaoD, "%s", "Em C, vari�veis locais e globais t�m o mesmo escopo, sendo acess�veis em qualquer lugar do programa.");
    perguntas[7].respostaCorreta = 'A';

    // Pergunta 9
    sprintf(perguntas[8].pergunta, "%s", "O que s�o structs em C e como elas organizam dados?");
    sprintf(perguntas[8].opcaoA, "%s", "Structs em C s�o estruturas de dados que agrupam vari�veis sob um nome, organizando dados relacionados.");
    sprintf(perguntas[8].opcaoB, "%s", "Structs em C desorganizam dados, dificultando o acesso a vari�veis relacionadas sob um nome.");
    sprintf(perguntas[8].opcaoC, "%s", "Structs em C s�o sin�nimos para vari�veis individuais, incapazes de organizar dados estruturadamente.");
    sprintf(perguntas[8].opcaoD, "%s", "Em C, structs armazenam apenas um tipo de dado, sem agrupar vari�veis de tipos diferentes.");
    perguntas[8].respostaCorreta = 'A';

    // Pergunta 10
    sprintf(perguntas[9].pergunta, "%s", "Como a linguagem C lida com a divis�o por zero, especialmente ao utilizar o operador de divis�o /?");
    sprintf(perguntas[9].opcaoA, "%s", "Em C, divis�o por zero tem comportamento indefinido; � crucial verificar o divisor antes para evitar erros.");
    sprintf(perguntas[9].opcaoB, "%s", "Em C, a divis�o por zero � tratada automaticamente, redefinindo o resultado para zero.");
    sprintf(perguntas[9].opcaoC, "%s", "C lida com divis�o por zero retornando um valor especial, indicando que a opera��o n�o pode ser realizada, sem comportamento indefinido.");
    sprintf(perguntas[9].opcaoD, "%s", "Em C, divis�o por zero n�o apresenta problemas, resultando em infinito; n�o � necess�rio verificar antes.");
    perguntas[9].respostaCorreta = 'A';


    int pontuacao = 0;

    // Loop para exibir cada pergunta
    for (int i = 0; i < 10; i++) {
        pontuacao += exibirPergunta(perguntas[i]);
    }

    printf("Parabéns, Você ganhou 1 milhão de picas grossas no seu cu! :) \n");

    return 0;
}
