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
    int raiz, result;
    
    raiz = 4;
    
    result = sqrt(raiz);
    if (result >= 0){
        printf("valor positivo: %d", result);
    } else {
        printf("valor negativo: %d", result);
    }
    return 0;
}

