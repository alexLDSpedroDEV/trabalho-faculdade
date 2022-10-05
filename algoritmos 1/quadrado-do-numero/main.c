/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int result, entrada;
    
    entrada = 15;
    
    while (entrada < 201) {
        result = entrada * entrada;
        printf("o quadrado de %d é igual á: %d\n", entrada, result);
        entrada = entrada + 1;
    }
    
    printf("fim");

    return 0;
}
