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
    //declarando as variaveis
    int fhist, second, result;
    
    //pedindo os valores 
    printf("fhist number: ");
    scanf("%d", &fhist);
    printf("second number: ");
    scanf("%d", &second);
    
    //operação
    result = fhist + second;
    //condições
    if (result > 10){
        printf("%d", result);
    } else{
        printf("soma inferior a 10");
    }
    
    
    return 0;
}
