/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int i, numUsur, num, res, y;
    y=0;
    printf("quantos números você quer ler: ");
    scanf("%d", &numUsur);

    for(i=1; i<=numUsur;i++){
        printf("digite o número: ");
        scanf("%d", &num);
        
        y = y + num;
    }
    res = y / numUsur;
    printf("a media aritmatica desses números é %d", res);
    
    return 0;
}
