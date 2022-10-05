/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    //programa para ar desconto em produtos 
    
    //declarandos as variaveis 
    float valor, result;
    int forma;
    
    //pegando os dados  
    printf("Qual o valor do produto: ");
    scanf("%f", &valor);
    
    printf("Formas de pagamento: \n 1 - avista no dinheiro deconto de 20 porcento\n 2 - avista no cartão desconto de 5 porcento \n 3 - em duas vezes valor normal.\n 4 - mais de duas vezes juros de 10 porcento \n Qual será sua forma de pagamento");
    
    printf("forma de pagamento: ");
    scanf("%d", &forma);
    
    //condições e resultados 
    switch (forma) {
        case 1:     //avista
            result = ((valor /100) * 20) - valor;
            printf("valor = %.2f", result);
            break;
            
        case 2:     //avista no cartão
            result = ((valor /100) * 5) - valor;
            printf("valor = %.2f", result);
            break;
            
        case 3:     //em duas vezes 
            result = valor;
            printf("valor = %.2f", result);
            break;
            
        case 4:     //mais de duas vezes 
            result = ((valor /100) * 10) + valor;
            printf("valor = %.2f", result);
            break;
    }
    return 0;
}

