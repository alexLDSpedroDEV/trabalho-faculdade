/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int a, b, c;
    printf("qual o valor de a: ");
    scanf("%d", &a);
    
    printf("qual o valor de b: ");
    scanf("%d", &b);

    
    if (a == b){
        c = a + b;
        printf("c = %d", c);
    }
    else{
        c = a * b;
        printf("c = %d", c);
    }
   return 0;
}

