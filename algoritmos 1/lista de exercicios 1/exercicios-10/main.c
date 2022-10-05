/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    float n1,n2,n3, med, res;
    int numetoIndentificacao;
    
    printf("qual o numero do aluno: ");
    scanf("%d", &numetoIndentificacao);
    
    printf("qual a nota");
    scanf("%f", &n1);
    
    printf("qual a nota");
    scanf("%f", &n2);
    
    printf("qual a nota");
    scanf("%f", &n3);
    
    med = (n1*0.5) + (n2*0.3) + (n3*0.2);
    
    if (med >= 9) {
        printf("parabens aluno %d tirou A\ncom notas %.2f, %.2f, %.2f e media %.2f", numetoIndentificacao, n1, n2, n3, med );
    } 
    if (med >= 7.5 && med < 9){
        printf("parabens aluno %d tirou B\ncom notas %.2f, %.2f, %.2f e media %.2f", numetoIndentificacao, n1, n2, n3, med );
    }
    if (med >= 6 && med < 7.5){
        printf("parabens aluno %d tirou c\ncom notas %.2f, %.2f, %.2f e media %.2f", numetoIndentificacao, n1, n2, n3, med );
    }
    if (med >= 0 &&  med < 6){
        printf("se fudeu aluno %d tirou d\ncom notas %.2f, %.2f, %.2f e media %.2f", numetoIndentificacao, n1, n2, n3, med );
    }
    return 0;
}
