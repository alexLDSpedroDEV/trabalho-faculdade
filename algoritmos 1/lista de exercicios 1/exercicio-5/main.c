/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
   //declarar variaveis
   int number1;
   
   // perguntado os valores das variaveis
   printf("what value number: ");
   scanf("%d", &number1);
   
   //condiçoes
   
   //number is equal the 20.
   if (number1 == 20){
       printf("number egual a 20.\n");
   }else{
       printf("the number not equal a 20.\n");
   }
   
   //number is large 20
   
   if (number1 >= 20){
       printf("number is large 20.\n");
   } else{
       printf("number not most large is 20.\n");
   }
   
   //number small is 20
   
   if (number1 < 20){
       printf("number small is 20.");
   } else{
       printf("number not is small 20.");
   }
   
   
   
   
   
   
   
   
}
