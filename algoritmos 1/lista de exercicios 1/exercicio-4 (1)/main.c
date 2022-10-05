/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    //programa que pegar o salario do funcionario;
    //pegar o código do cargo do funcionario;
    //dar aumentos as funcionarios com base em seus códigos;

    
    //declarando as variaveis
    float salario, aumento,porcentagen;
    int cod;
    
    //pegando os dados;
    printf("Qual o salário do funcionario: ");
    scanf("%f.4", &salario);
    
    printf("Qual o código do funcionario: ");
    scanf("%d", &cod);
    
    //condição, calculo e respostas;
    if(cod == 310){
        porcentagen = (salario / 100) * 5.0;            //tranformando a porcentagen em reais;
        aumento = salario + porcentagen;                // salario com aumento;
        
        // mostrando os resultados 
        printf(" Salário antigo: %.2f \n Novo salário: %.2f \n Porcentagen de aumento 5,0  dando o valor de valor: %.2f", salario, aumento, porcentagen);
    } 
    else{ 
        if(cod == 456){
            porcentagen = (salario / 100) * 7.5;        //tranformando a porcentagen em reais;
            aumento = salario + porcentagen;            // salario com aumento;
            
            // mostrando os resultados 
            printf("Salário antigo: %.2f \n Novo salário: %.2f \n Porcentagen de aumento 7,5  dando o valor de valor: %.2f", salario, aumento, porcentagen);
        }
        else{
            if (cod == 885){
                porcentagen = (salario / 100) * 10.0;   //tranformando a porcentagen em reais;
                aumento = salario + porcentagen;        // salario com aumento;
                
                // mostrando os resultados 
                printf("Salário antigo: %.2f \n Novo salário: %.2f \n Porcentagen de aumento 10,0 dando o valor de valor: %.2f", salario, aumento, porcentagen);
            } else{
                porcentagen = (salario / 100) * 15.0;   //tranformando a porcentagen em reais;
                aumento = salario + porcentagen;        // salario com aumento;
                
                // mostrando os resultados 
                printf("Salário antigo: %.2f \n Novo salário: %.2f \n Porcentagen de aumento 15,0  dando o valor de valor: %.2f", salario, aumento, porcentagen);
            }
        }
    }

    return 0;
}

