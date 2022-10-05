/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    // programa para saber se o numero é positivo ou negativo e se é impar ou par;
    
    //declarando as variaveis 
    int num, result;
    
    //pedindo os dados brutos 
    printf("Digite um número inteiro: ");
    scanf("%d", &num);
    
    //calculos 
    result = num % 2;
    
    //condição e mostrar dados se é positivo ou negativo
    if(num >= 0){
       printf("númeto é positivo \n"); 
    }
    else{
        printf("Número é negativo\n");
    }
    
    //condição e mostrar dados se é impar ou par
    if(result == 0){
        printf("Número é par ");
    }
    else{
        printf("Número é impar");
    }

    return 0;
}

