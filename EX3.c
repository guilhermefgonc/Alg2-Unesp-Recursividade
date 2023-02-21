/*
-------------------------------------------------------
Nome: Guilherme Ferreira Gonçalves
-------------------------------------------------------

Escreva uma função recursiva que determine a soma dos N primeiros números naturais. Fa-
ça um programa, com reprocessamento, que utilize esta função.
*/


#include <stdio.h>
#include <windows.h>


// cria o menu para o usuario
int Menu () {

    int opcao;
    system("cls");
    printf("---------- M E N U ----------\n");
    printf("1 - Calcular soma dos N primeiros numeros naturais\n");
    printf("Digite 0 para sair...\n");
    printf("-----> ");
    scanf("%d", &opcao);

    return opcao;
}


// Soma os N primeiros numeros naturais de forma recursiva
int Soma (int n) {

    if (n == 0) {
        return 0;
    }
    else {
        return n + Soma(n -1);
    }
}


int main () {

    int opcao, n, resultado;

    do {
        
        opcao = Menu();

        switch (opcao) {
            case 0: printf("\nPrograma encerrado...\n"); break;
        
            case 1:
                system("cls");
                printf("---------- S O M A ----------\n");
                printf("Digite o valor de N: ");
                scanf("%d", &n);
                resultado = Soma(n);
                printf("\nValor da soma dos primeiros %d primeiros numeros naturais (sem contar o 0) = %d\n", n, resultado);
                printf("-----------------------------");
                printf("\nPressione 'ENTER' para continuar...\n");
                setbuf(stdin, NULL);
                getchar();
        }
    } while (opcao != 0);

    return 0;
}
