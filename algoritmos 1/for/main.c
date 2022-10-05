/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include <stdlib.h>
//comande que vão ser uteis:
//printf = escreva 
//usamos % e o tipo da variavel para escrever uma variavel.
//%f = float
//%d = int

//

int main(void){
    // declarando a variavel
    float nota1, nota2, nota3, media;
    
    //pedir ao usúario para escrever a idade 
    printf("Digite sua primeira nota: ");
    scanf("%f", &nota1);
    printf("Digite sua segunda nota: ");
    scanf("%f", &nota2);
    printf("Digite sua segunda nota: ");
    scanf("%f", &nota3);
    
    //calculo
    
    media= (nota1 + nota2 + nota3)/3;
    //sistema de condição
    if (media >= 6) {
        printf("aprovado com media %.2f", media);
    } else {
        printf("reprovado com media %.2f", media);
    }
    

    return 0; //retorno da função main
}
