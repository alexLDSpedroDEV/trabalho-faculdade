/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int i,x,y;
    float salario,porcent;
    x = 0;
    y = 0;
    for(i=1; i<=15; i++){
        printf("digite o salario: ");
        scanf("%f", &salario);
        
        if(salario <= 1500){
            x = x + 1;
        }
        else{
            
            y = y + 1;
        }
    }
    porcent = (y * 100) / 15;
    printf("%.0f porcento dos usuarios tem salario maior que 1500 reais", porcent);

    return 0;
}
