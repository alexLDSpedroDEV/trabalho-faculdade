/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include <math.h>
#include <string.h>
#include <conio.h>
#include <time.h>
int main()
{
    //estou fando um jogo de impar e par

    int sair, x, dado, cpu, jogadaPlayer,jogadaCpu;
    char entrada[6];
    sair = 0;
    
    do{
        if (sair == 1){
            printf("obrigado por jogar meu jogo");
            break;
        };
        printf("Bem Vindo ao meu jogo de imper par '-' \n");
        printf("você quer par ou impar? \n ");
        scanf("%s", entrada);
    
        
        x = strcmp(entrada,"par");
        
        srand(time(NULL)); //atualizar a tela
        
        if (x == 0){
            printf("Jogue o seu número: ");
            scanf("%d", &dado);
            
            jogadaPlayer = dado;
            
            //jogada computador
            jogadaCpu = rand(+1) % 10;
        
            if (((jogadaPlayer + jogadaCpu) % 2) == 0 ){
                printf("%d + %d  \nVocê ganhou", jogadaPlayer, jogadaCpu);
            } else{
                printf("%d + %d  \nVocê perdeu", jogadaPlayer, jogadaCpu);
            }
            
        }else if (x != 0){
            printf("Jogue o seu número: ");
            scanf("%d", &dado);
            
            jogadaPlayer = dado;
            
            //jogada computador
            jogadaCpu = rand() % 10;
            
        
            if (((jogadaPlayer + jogadaCpu) % 2) != 0 ){
                printf("%d + %d  \nVocê ganhou", jogadaPlayer, jogadaCpu);
            } else{
                printf("%d + %d  \nVocê perdeu", jogadaPlayer, jogadaCpu);
            }
        }
        printf("\nVocê quer jogar de novo? se não digite 1: ");
        scanf("%d", &sair);
    }while( sair == 0);
    
    
    return 0;
}

