/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/

#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <math.h>

main()

{
    //declarano as variaveis 
    char nome[30], estadoCivel[30];
    char sexo[1], casada[7];
    int tempoCasado, retorno;

    //pedindo os dados 
    printf("Informe seu nome: ");
    scanf("%s", nome);

    printf("Informe seu sexo: ");
    scanf("%s", sexo);

    printf("Informe seu estado cívil: ");
    scanf("%s", estadoCivel);

    //condições e respostas 
    if (strcmp(sexo,"f") == 0){
        if (strcmp(estadoCivel,"casada") == 0){
            printf("quantos anos de casada você tem: ");
            scanf("%d", tempoCasado);
            
            printf("obrigado por responder");
            
        }
        else{
            printf("você não é  o publico alvo da pesquisa");
        }
    } 
    else {
        printf("você não é  o publico alvo da pesquisa");
    }
    printf("\nObrigado por responder meu questionario `-´");
    return 0;
}

