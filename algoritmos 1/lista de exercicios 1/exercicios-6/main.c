/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    //declarando as variaveis 
    int dis, consA, consB, consC;
    char car;
    
    // dando valor as variaveis
   
        
    //perguntando ao usuario 
    printf("qual o seu carro a,b ou c: ");
    scanf("%c", &car);
    
    printf("qual a distancia percorida: ");
    scanf("%d", &dis);
    
    consA = dis / 8;
    consB = dis / 9;
    consC = dis / 12;
    
    //cases 
    switch(car){
        case 'a':
           
            printf("\n carro: a \n distancia: %dkm \n consumo: %d litros \n", dis, consA);
            break;
        case 'b':
            
            printf("\n carro: b \n distancia: %dkm \n consumo: %d litros \n", dis, consB);
            break;
        case 'c':
            
            printf("\n carro: c \n distancia: %dkm \n consumo: %d litros \n", dis, consC);
            break;
    }
    
    
    return 0;
}
