//Código desenvolvido por Lucas Passos na disciplina de técnicas de programação I
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

// Função para exibir uma pergunta e suas opções
int exibirPergunta(struct Pergunta pergunta) {
    printf("%s\n", pergunta.pergunta);
    printf("A) %s\n", pergunta.opcaoA);
    printf("B) %s\n", pergunta.opcaoB);
    printf("C) %s\n", pergunta.opcaoC);
    printf("D) %s\n", pergunta.opcaoD);

    char respostaJogador;
    printf("\n Escolha a opção correta (A, B, C ou D): ");
    scanf(" %c", &respostaJogador);

    if (respostaJogador == pergunta.respostaCorreta) {
        printf("\n Resposta correta! Vamos para a próxima pergunta.\n\n");
        return 1; // Retorna 1 se a resposta estiver correta
    } else {
        printf("\n Resposta incorreta! Que pena, você perdeu. \n");
        exit(0); // Termina o programa em caso de resposta incorreta
    }
}

int main() {
    setlocale(LC_ALL, "Portuguese");

    printf("Bem-vindo ao jogo SHOW DO MILHÃO!\n\n");

    struct Pergunta perguntas[10]; // Array para armazenar as perguntas

    // Inicialização das perguntas
    // Pergunta 1
    sprintf(perguntas[0].pergunta, "%s", "Por que a linguagem C é classificada como de médio nível?\n");
    sprintf(perguntas[0].opcaoA, "%s", "Porque combina alto nível com baixo nível.");
    sprintf(perguntas[0].opcaoB, "%s", "C é considerada de alto nível, excluindo características de baixo nível.");
    sprintf(perguntas[0].opcaoC, "%s", "C é puramente de baixo nível, sem recursos de alto nível.");
    sprintf(perguntas[0].opcaoD, "%s", "C é classificada como exclusivamente de alto nível, sem combinar características.");
    perguntas[0].respostaCorreta = 'A';

    // Pergunta 2
    sprintf(perguntas[1].pergunta, "%s", "Qual é o conceito de ponteiros em C e suas diferenças em relação às variáveis comuns?\n");
    sprintf(perguntas[1].opcaoA, "%s", "Armazenam endereços, diferem de variáveis.");
    sprintf(perguntas[1].opcaoB, "%s", "Ponteiros em C armazenam diretamente valores, não endereços.");
    sprintf(perguntas[1].opcaoC, "%s", "Ponteiros e variáveis comuns em C são idênticos.");
    sprintf(perguntas[1].opcaoD, "%s", "A linguagem C não suporta ponteiros; só variáveis comuns.");
    perguntas[1].respostaCorreta = 'A';

    // Pergunta 3
    sprintf(perguntas[2].pergunta, "%s", "Qual é a função dos arquivos de cabeçalho em C?\n");
    sprintf(perguntas[2].opcaoA, "%s", "Contêm declarações, essenciais para o compilador.");
    sprintf(perguntas[2].opcaoB, "%s", "Arquivos .h em C são usados apenas para documentação.");
    sprintf(perguntas[2].opcaoC, "%s", "Arquivos .h armazenam apenas variáveis globais.");
    sprintf(perguntas[2].opcaoD, "%s", "Em C, .h são exclusivos para funções, não variáveis.");
    perguntas[2].respostaCorreta = 'A';

    // Pergunta 4
    sprintf(perguntas[3].pergunta, "%s", "Como a linguagem C trata a entrada e saída de dados, e quais são as funções principais utilizadas?\n");
    sprintf(perguntas[3].opcaoA, "%s", "Biblioteca padrão; printf e scanf essenciais.");
    sprintf(perguntas[3].opcaoB, "%s", "C não oferece suporte a I/O; programadores lidam manualmente.");
    sprintf(perguntas[3].opcaoC, "%s", "I/O em C é gerenciado por bibliotecas externas.");
    sprintf(perguntas[3].opcaoD, "%s", "I/O em C é tratado pelo compilador; printf e scanf são opcionais.");
    perguntas[3].respostaCorreta = 'A';

    // Pergunta 5
    sprintf(perguntas[4].pergunta, "%s", "Quais são as principais diferenças entre as funções printf e scanf em C?\n");
    sprintf(perguntas[4].opcaoA, "%s", "printf imprime, scanf recebe; ambas stdio.h.");
    sprintf(perguntas[4].opcaoB, "%s", "Em C, printf e scanf são intercambiáveis, sem distinção.");
    sprintf(perguntas[4].opcaoC, "%s", "C não possui printf e scanf; programadores criam funções próprias.");
    sprintf(perguntas[4].opcaoD, "%s", "Ambas são exclusivamente usadas para saída de dados em C.");
    perguntas[4].respostaCorreta = 'A';

    // Pergunta 6
    sprintf(perguntas[5].pergunta, "%s", "Como o escopo em C influencia a visibilidade das variáveis?\n");
    sprintf(perguntas[5].opcaoA, "%s", "Local em função; global em todo programa.");
    sprintf(perguntas[5].opcaoB, "%s", "Em C, o escopo não afeta a visibilidade das variáveis.");
    sprintf(perguntas[5].opcaoC, "%s", "O escopo em C afeta apenas variáveis globais.");
    sprintf(perguntas[5].opcaoD, "%s", "Em C, variáveis locais e globais têm o mesmo escopo.");
    perguntas[5].respostaCorreta = 'A';

    // Pergunta 7
    sprintf(perguntas[6].pergunta, "%s", "O que são structs em C e como elas organizam dados?\n");
    sprintf(perguntas[6].opcaoA, "%s", "Agrupam dados sob nome único.");
    sprintf(perguntas[6].opcaoB, "%s", "Structs em C desorganizam dados, dificultando o acesso.");
    sprintf(perguntas[6].opcaoC, "%s", "Structs em C são sinônimos de variáveis individuais.");
    sprintf(perguntas[6].opcaoD, "%s", "Structs em C armazenam apenas um tipo de dado.");
    perguntas[6].respostaCorreta = 'A';

    // Pergunta 8
    sprintf(perguntas[7].pergunta, "%s", "Como a linguagem C lida com a divisão por zero, especialmente ao utilizar o operador de divisão /?\n");
    sprintf(perguntas[7].opcaoA, "%s", "Indefinido; verificar evita erros.");
    sprintf(perguntas[7].opcaoB, "%s", "Em C, a divisão por zero é tratada automaticamente.");
    sprintf(perguntas[7].opcaoC, "%s", "C retorna um valor especial ao dividir por zero.");
    sprintf(perguntas[7].opcaoD, "%s", "Em C, divisão por zero não apresenta problemas.");
    perguntas[7].respostaCorreta = 'A';

    // Pergunta 9
    sprintf(perguntas[8].pergunta, "%s", "Explique o conceito de ponteiros para funções em C e sua utilidade?\n");
    sprintf(perguntas[8].opcaoA, "%s", "Armazenam endereços, úteis para dinâmica.");
    sprintf(perguntas[8].opcaoB, "%s", "Ponteiros para funções armazenam código de máquina, não endereços.");
    sprintf(perguntas[8].opcaoC, "%s", "Ponteiros para funções em C só armazenam valores de retorno.");
    sprintf(perguntas[8].opcaoD, "%s", "Em C, ponteiros para funções não armazenam endereços.");
    perguntas[8].respostaCorreta = 'A';

    // Pergunta 10
    sprintf(perguntas[9].pergunta, "%s", "Qual a diferença entre variáveis locais e globais em C?\n");
    sprintf(perguntas[9].opcaoA, "%s", "Local na função; global em todo programa.");
    sprintf(perguntas[9].opcaoB, "%s", "Em C, variáveis locais são acessíveis em todo o programa.");
    sprintf(perguntas[9].opcaoC, "%s", "Em C, variáveis locais e globais são intercambiáveis.");
    sprintf(perguntas[9].opcaoD, "%s", "Variáveis locais em C têm escopo global.");
    perguntas[9].respostaCorreta = 'A';

    int pontuacao = 0;

    // Loop para exibir cada pergunta
    for (int i = 0; i < 10; i++) {
        pontuacao += exibirPergunta(perguntas[i]);
    }

    printf("Parabéns, você ganhou uma garrafa de CACHAÇA DOURADINHA! :)\n");

    return 0;
}
