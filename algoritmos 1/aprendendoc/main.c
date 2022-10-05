/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
//comande que vão ser uteis:
//printf = escreva 
//usamos % e o tipo da variavel para escrever uma variavel.
//%f = float
//%d = int

//

int main(void){
    //entrada de dados
    int num1,num2,num3;
    float foot1,foot2,foot3;
    char letra;
    
    //dando valor para as variaveis
    num1 = 10;
    num2 = 20;
    num3 = 30;
    
    foot1 = 2;
    foot2 = 4;
    foot3 = 6;
    
    letra = 'a';
    
    //escrevendo as variaveis
    printf("os numeros inteiros = %d - os numeros inteiros = %d - as letra = %c \n" ,num1, num2, letra);
    printf("os numeros inteiros = %d \n",num2);
    printf("os numeros inteiros = %d \n",num3);
    
    printf("os numeros float = %.1f \n" ,foot1);
    printf("os numeros float = %.1f \n" ,foot2);
    printf("os numeros float = %.1f \n" ,foot3);
    
    printf("as letra = %c \n" ,letra);

    return 0; //retorno da função main
}
