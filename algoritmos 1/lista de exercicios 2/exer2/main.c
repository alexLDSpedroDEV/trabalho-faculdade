/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int x, y, r, n;
    
    y=1;
    printf("digite um número entre 1 e 10: ");
    scanf("%d", &n);
    
    for (x=1;x<=10;x++) {
        r = y*n;
        printf("%d\n", r);
        y++;
    }

    return 0;
}
