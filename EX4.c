/*
-------------------------------------------------------
Nome: Guilherme Ferreira Gonçalves
-------------------------------------------------------

Faça uma função recursiva que calcule a soma dos quadrados dos N primeiros números po-
sitivos.
*/


#include <stdio.h>
#include <windows.h>


// calcula a soma dos quadrados dos N primeiros numeros positivos
int SomaQuadrados (int n) {

    if (n == 1) {
        return 1;
    }
    else {
        return n * n + SomaQuadrados(n - 1);
    }

}


int main () {

    int n, resultado;

    system("cls");
    printf("Digite um numero N (inteiro positivo): ");
    scanf("%d", &n);
    
    resultado = SomaQuadrados(n);

    printf("\nSoma dos quadrados dos %d primeiros numeros positivos = %d\n", n, resultado);

    return 0;
}
