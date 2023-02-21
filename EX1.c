/*
-------------------------------------------------------
Nome: Guilherme Ferreira Gonçalves
-------------------------------------------------------

FATORIAL 
a) Escreva uma função iterativa para calcular N! (fatorial de N). 
b) Refaça o item anterior de maneira recursiva. 
c) Execute a versão recursiva e não-recursiva da função fatorial e, examine quanto tempo 
cada uma exige conforme se aumenta o valor de N.
*/


#include <stdio.h>
#include <windows.h>
#include <time.h>


// calcula o fatorial de forma iterativa
void Iterativa (int n) {

    long long int fatorial = 1;
    time_t tIni, tFim;

    tIni = time(NULL);
    for (int i = n; i > 1; i--) {
        fatorial = fatorial * i;
    }
    tFim = time(NULL);

    printf("\nCodigo Iterativo:\n");
    printf("Resultado =  %lld\n", fatorial);
    printf("Tempo de execucao = %f segundos", difftime(tFim, tIni));
}


// calcula o fatorial de forma recursiva
long long int Recursiva (long long int n) {

    if (n == 0 || n == 1) {
        return 1;
    }
    else {
        return n * Recursiva(n - 1);
    }
}


int main () {

    int n, resultado;
    time_t tIni, tFim;

    system("cls");
    printf("---------- F A T O R I A L ----------\n");
    printf("Digite o valor de N: ");
    scanf("%d", &n);

    Iterativa(n);

    printf("\nCodigo Recursivo:\n");
    tIni = time(NULL); 
    printf("Resultado =  %lld\n", Recursiva(n));
    tFim = time(NULL);
    printf("Tempo de execucao = %f segundos", difftime(tFim, tIni));

    return 0;
}
