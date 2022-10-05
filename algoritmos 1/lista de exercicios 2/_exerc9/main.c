/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int opcao;
    do{
        
        printf("Digite um número: ");
        scanf("%d", &opcao);
        
        if ((opcao >= 12) && (opcao <= 20)){
            
            printf("Entrada válida, número digitado %d", opcao); 
            break;
        } else{
            printf("Entrada inválida, ");
            
        }
    }while(opcao);

    return 0;
}
