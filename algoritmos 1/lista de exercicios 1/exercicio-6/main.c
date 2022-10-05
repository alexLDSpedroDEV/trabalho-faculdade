/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include <math.h>

int main()
{
    //programa para fazer baskaras;
    
    //declarando variaveis
    float a, b, c, delta, divisao, result;
    
    //pegando os dados 
    printf("digite o valor da variavel a: ");
    scanf("%f", &a);
    printf("digite o valor da variavel b: ");
    scanf("%f", &b);
    printf("digite o valor da variavel c: ");
    scanf("%f", &c);
    
    //operações
    delta = ((-b * -b) -4*a*c);
    divisao = 2 * a;
    
    //condição e resultados
    if (delta >= 0){
        if (delta >= 0) {
            result = (-b + sqrt(delta)) / divisao;
            printf("x' = %.2f \n", result);
        }
        if (delta >= 0){
            result = (-b - sqrt(delta)) / divisao;
            printf("x'' = %.2f", result);
        }
        
    }
    else{
        printf("delta inexistente");
    }
    
    

    return 0;
}

