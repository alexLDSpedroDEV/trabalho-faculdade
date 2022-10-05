/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    //declarando variaveis
    int number1;
    
    //pedindo valor das variaveis
    printf("value number1: ");
    scanf("%d", &number1);
    
    //consições
    if(number1 >= 20 && number1 <= 80) {
        printf("o valor digitado está entre 20 e 80");
    } else{
        printf("number off interval");
    }
    
    
    

    return 0;
}
