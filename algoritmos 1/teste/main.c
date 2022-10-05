/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int numeroA,numeroB,resto;
    
    printf("Digite dois numeros (ordem crecente):  ");
    scanf("%d %d", &numeroA, &numeroB);
    
    while(numeroA > 0){
        resto = numeroB % numeroA;
        printf("numeroB = %d; numeroA = %d; ", numeroB, numeroA);
        printf("resto = %d\n", resto);
        numeroB = numeroA;
        numeroA = resto;
    }
    printf("MDC: %d", numeroB);
    return 0;
}
