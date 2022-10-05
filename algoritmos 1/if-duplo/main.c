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
    int nota1, nota2, media;
    
    //pedir ao usúario para escrever a idade 
    printf("Digite sua primeira nota: ");
    scanf("%d", &nota1);
    printf("Digite sua segunda nota: ");
    scanf("%d", &nota2);
    
    //calculo
    
    media= (nota1 + nota2)/2;
    //sistema de condição
    if (media >= 6) {
        printf("aprovado com media %d", &media);
    } else {
        printf("reprovado com media %d", &media);
    }
    

    return 0; //retorno da função main
}
