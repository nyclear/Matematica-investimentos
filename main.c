#include <stdio.h>
#include <stdlib.h>

int main()
{
    while(1){
        int meses = 0;
        int valor = 0;

        printf("por quantos meses voce ira investir?\n");
        scanf("%d", &meses);

        printf("qual sera o valor depositado mensalmente?\n");
        scanf("%d", &valor);

        int total = valor;

        printf("Utilizando o S&P500 como base:Mes 1:%i\n", valor);
        for(int i = 2; i <= meses; i++){
            total = total + (total-total*0.98);
            total = total + valor;
            printf("Mes %i:R$%i\n", i, total);
        }
    }
}
