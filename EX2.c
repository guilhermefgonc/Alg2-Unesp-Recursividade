/*
-------------------------------------------------------
Nome: Guilherme Ferreira Gonçalves
-------------------------------------------------------

PRODUTO 
a) Escreva uma função iterativa para calcular o produto a*b usando adição, onde a e b são in-
teiros não negativos. 
b) Refaça o item anterior de maneira recursiva
*/


#include <stdio.h>
#include <windows.h>


// calcula a * b usando adicao de modo iterativo
int Iterativa (int num, int vezes) {
    
    int result = 0;

    for (int i = 1; i <= vezes; i++) {
        result += num;
    }

    return result;
}


// calcula a * b usando adicao de modo recursivo
int Recursivo (int num, int vezes) {
    
    int result = 0;

    if (vezes == 0 || num == 0) {
        return result;
    }

    if (vezes == 1 ) {
        result = num;
    }
    else {
        result = num + Recursivo(num, vezes - 1);
    }

    return result;
}


int main () {

    int a, b, resultado;

    system("cls");
    printf("--------------------------------------------------\n");
    printf("Digite o valor de A (inteiro nao negativo): ");
    scanf("%d", &a);
    printf("Digite o valor de B (inteiro nao negativo): ");
    scanf("%d", &b);
    
    resultado = Iterativa(a, b);
    printf("\nCodigo iterativo: ");
    printf("\nResultado =  %d\n", resultado);

    resultado = Recursivo(a, b);
    printf("\nCodigo recursivo:");
    printf("\nResultado =  %d\n", resultado);
    printf("--------------------------------------------------\n");
    
    return 0;
}
