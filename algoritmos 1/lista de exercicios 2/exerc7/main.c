/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include <string.h>

int main()
{
    int x, z,k;
    float vt,salario, avista, parcelado; 
    char  forma[1];
    
    avista = 0;
    parcelado = 0;
    
    printf("digite V para avista e P para parcelado\n");
   
   for(x=1; x <= 2; x++){
        printf("valor do produto: ");
        scanf("%f", &salario);
        vt = vt + salario;
        
        printf("qual a forma de pagamento: ");
        scanf("%s", forma);
        
       z = strcmp(forma,"V");
       k = strcmp(forma,"P");
       if(z == 0){
           avista = avista + salario;
       }
       else if(k == 0){
           parcelado = parcelado + salario;
       } else{
           printf("codigo errado");
       }
       
   }
    printf("valor total das transações: %.2f\n", vt);
    printf("valor total das transações avistas: %.2f\n", parcelado);
    printf("valor total das transações parceladas:  %.2f", avista);
        return 0;
}
        
       

