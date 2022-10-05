/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int x,maior,menor, altura;
    
    maior=0;
    menor=400;
    
    for(x=1; x<=3;x++){
        printf("digite as 15 alturas: ");
        scanf("%d", &altura);
        
        if(altura > maior){
            maior = altura;
        } 
        if( altura < menor){
            menor = altura;
        }
    }
    
    
    printf("o menor altura é %d \n", menor);
    printf("o maior altura é %d", maior);

    

    return 0;
}

