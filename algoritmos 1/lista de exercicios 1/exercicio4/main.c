/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int x,y,z,a;

    for(x=1;x<=10;x++){
        printf("digite um numero: ");
        scanf("%d", &y);
        
        if(y >= 10 && y <= 15){
            a = a + 1;
            
        } else{
            
            z = z + 1;
            
        }
    }
    printf("tem %d numero no intervado", y);
    printf(" %d numero não estão no intervado", z);

  

    return 0;
}
